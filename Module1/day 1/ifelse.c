#include<stdio.h>

int FindBiggest(int num1 , int num2)
{
    if (num1>num2){
        return num1;
    }
    else{
        return num2;
    }
}

int main () {
    int result,num1,num2;
    printf("enter num1:");
    scanf("%d",&num1);

    printf("enter num2:");
    scanf("%d",&num2);

    result=FindBiggest(num1 , num2 );
    printf("the biggest number is:%d\n",result);

    return 0;
}