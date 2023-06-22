#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

bool searchStudentByName(const struct Student* students, int numStudents, const char* searchName, struct Student* foundStudent) {
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            *foundStudent = students[i];
            return true;
        }
    }

    return false;
}

void displayStudent(const struct Student* student) {
    printf("Roll No: %d\n", student->rollno);
    printf("Name: %s\n", student->name);
    printf("Marks: %.2f\n", student->marks);
    printf("\n");
}

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    // Assume the array of structures is initialized with data before calling the searchStudentByName() function

    char searchName[20];
    printf("Enter the name to search: ");
    scanf("%s", searchName);

    struct Student foundStudent;

    if (searchStudentByName(students, numStudents, searchName, &foundStudent)) {
        printf("\n");
        printf("Student Found:\n");
        displayStudent(&foundStudent);
    } else {
        printf("\n");
        printf("Student Not Found.\n");
    }

    free(students);

    return 0;
}
