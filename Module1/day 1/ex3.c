#include <stdio.h>

int main() {
    int rollNo;
    char name[100];
    float physics, math, chemistry;
    float total_Marks, percentage;

    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Marks of Physics: ");
    scanf("%f", &physics);

    printf("Enter Marks of Math: ");
    scanf("%f", &math);

    printf("Enter Marks of Chemistry: ");
    scanf("%f", &chemistry);

    // Calculate total marks and percentage
    total_Marks = physics + math + chemistry;
    percentage = (total_Marks / 300) * 100;

    // Print the summary


    printf("\n--- Summary ---\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physics);
    printf("Math Marks: %.2f\n", math);
    printf("Chemistry Marks: %.2f\n", chemistry);
    printf("Total Marks: %.2f\n", total_Marks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}

