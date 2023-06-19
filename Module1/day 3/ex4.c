#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    int temp, divisor = 1;

    while (divisor <= 1000) {
        temp = (num / (divisor * 10)) * divisor + (num % divisor);
        if (temp > largest) {
            largest = temp;
        }
        divisor *= 10;
    }

    return largest;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largest = findLargestNumber(num);
    printf("The largest number by deleting a single digit is: %d\n", largest);

    return 0;
}
