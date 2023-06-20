#include <stdio.h>

// Structure for student
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

// Function to swap the fields of two structures using pointers
void swapStructures(struct Student* student1, struct Student* student2) {
    struct Student temp;

    // Swap name
    strcpy(temp.name, student1->name);
    strcpy(student1->name, student2->name);
    strcpy(student2->name, temp.name);

    // Swap roll number
    temp.rollNumber = student1->rollNumber;
    student1->rollNumber = student2->rollNumber;
    student2->rollNumber = temp.rollNumber;

    // Swap marks
    temp.marks = student1->marks;
    student1->marks = student2->marks;
    student2->marks = temp.marks;
}

int main() {
    struct Student student1, student2;

    printf("Enter details for student 1:\n");
    printf("Enter name: ");
    scanf("%s", student1.name);
    printf("Enter roll number: ");
    scanf("%d", &(student1.rollNumber));
    printf("Enter marks: ");
    scanf("%f", &(student1.marks));

    printf("\n");

    printf("Enter details for student 2:\n");
    printf("Enter name: ");
    scanf("%s", student2.name);
    printf("Enter roll number: ");
    scanf("%d", &(student2.rollNumber));
    printf("Enter marks: ");
    scanf("%f", &(student2.marks));

    printf("\n");

    printf("Before swapping:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);

    printf("\n");

    printf("Student 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Roll Number: %d\n", student2.rollNumber);
    printf("Marks: %.2f\n", student2.marks);

    printf("\n");

    // Swap the fields of student1 and student2
    swapStructures(&student1, &student2);

    printf("After swapping:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);

    printf("\n");

    printf("Student 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Roll Number: %d\n", student2.rollNumber);
    printf("Marks: %.2f\n", student2.marks);

    return 0;
}
