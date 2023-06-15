#include<stdio.h>

int Biggestifelse(int num1 , int num2)
{
    if (num1>num2){
        return num1;
    }
    else{
        return num2;
    }
}

int Biggestternary(int num1 , int num2)
{
    return (num1 > num2)? num1 : num2;
}

int main () {
    int a,b;
    printf("enter a:");
    scanf("%d",&a);

    printf("enter b:");
    scanf("%d",&b);

    int resultifelse = Biggestifelse(a , b );
    printf("the biggest number is:%d\n",resultifelse);

    int resultternary = Biggestternary(a ,b);
    printf("the biggest number is:%d\n",resultternary);

    return 0;
}