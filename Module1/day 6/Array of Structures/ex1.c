#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for student
struct Student {
    int rollno;
    char name[20];
    float marks;
};

// Function to parse the string and initialize an array of structures
void initializeStudents(char* inputString, struct Student* students, int numStudents) {
    char* token;
    char* delimiter = " ";

    // Tokenize the input string
    token = strtok(inputString, delimiter);

    // Iterate over the tokens and initialize the structures
    for (int i = 0; i < numStudents; i++) {
        students[i].rollno = atoi(token);

        token = strtok(NULL, delimiter);
        strcpy(students[i].name, token);

        token = strtok(NULL, delimiter);
        students[i].marks = atof(token);

        token = strtok(NULL, delimiter);
    }
}

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Flush the input buffer
    fflush(stdin);

    // Dynamically allocate memory for an array of 'numStudents' student structures
    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter the input string: ");
    char inputString[100];
    fgets(inputString, sizeof(inputString), stdin);

    // Remove newline character from input string
    if (inputString[strlen(inputString) - 1] == '\n')
        inputString[strlen(inputString) - 1] = '\0';

    // Initialize the array of structures
    initializeStudents(inputString, students, numStudents);

    // Display the initialized structures
    printf("\n");
    printf("Initialized Students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    // Free dynamically allocated memory
    free(students);

    return 0;
}

