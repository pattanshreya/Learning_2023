#include<stdio.h>

int main()
{
    int marks;
    printf("enter student marks:");
    scanf("%d",&marks);

    if (marks<=100 && marks>=90)
    {
        printf("Grade A");
    }
    else if (marks<=89 && marks>=75)
    {
        printf("Grade B");
    
    }
    else if (marks<=74 && marks>=60)
    {
        printf("Grade C");
    
    }
    else if (marks<=59 && marks>=50)
    {
        printf("Grade D");
    
    }
    else if (marks<=49 && marks>=0)
    {
        printf("Grade F");
    
    }
    else{
        printf("Invalid Marks");
    }
    return 0;
}