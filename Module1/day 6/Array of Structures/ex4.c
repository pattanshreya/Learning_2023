#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

// Comparison function for sorting in descending order
int compareDescending(const void* a, const void* b) {
    struct Student* studentA = (struct Student*)a;
    struct Student* studentB = (struct Student*)b;

    if (studentA->marks < studentB->marks)
        return 1;
    else if (studentA->marks > studentB->marks)
        return -1;
    else
        return 0;
}

void sortStudentsDescending(struct Student* students, int numStudents) {
    qsort(students, numStudents, sizeof(struct Student), compareDescending);
}

void displayStudents(const struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
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

    // Assume the array of structures is initialized with data before calling the sortStudentsDescending() function

    printf("\n");
    printf("Before Sorting:\n");
    displayStudents(students, numStudents);

    sortStudentsDescending(students, numStudents);

    printf("\n");
    printf("After Sorting:\n");
    displayStudents(students, numStudents);

    free(students);

    return 0;
}
