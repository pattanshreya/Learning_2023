#include <stdio.h>

int findSmallestDigit(int num);
int findLargestDigit(int num);

int main() {
    int n, i;
    int num, smallest, largest;
    int isValid = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Handling case when n is less than 2
    if (n < 2) {
        printf("Not Valid\n");
        return 0;
    }

    // Taking input for the first number
    printf("Enter number 1: ");
    scanf("%d", &num);
    smallest = largest = num;

    // Iterating through remaining numbers
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Updating smallest and largest digits
        int smallestDigit = findSmallestDigit(num);
        int largestDigit = findLargestDigit(num);

        if (smallestDigit == -1 || largestDigit == -1) {
            isValid = 0;
            break;
        }

        if (smallestDigit < smallest) {
            smallest = smallestDigit;
        }

        if (largestDigit > largest) {
            largest = largestDigit;
        }
    }

    if (isValid) {
        printf("Smallest digit: %d\n", smallest);
        printf("Largest digit: %d\n", largest);
    } else {
        printf("Not Valid\n");
    }

    return 0;
}

// Function to find the smallest digit in a number
int findSmallestDigit(int num) {
    int smallest = 9;

    while (num > 0) {
        int digit = num % 10;

        if (digit < smallest) {
            smallest = digit;
        }

        num /= 10;
    }

    if (smallest == 9) {
        return -1; // Invalid number
    }

    return smallest;
}

// Function to find the largest digit in a number
int findLargestDigit(int num) {
    int largest = 0;

    while (num > 0) {
        int digit = num % 10;

        if (digit > largest) {
            largest = digit;
        }

        num /= 10;
    }

    if (largest == 0) {
        return -1; // Invalid number
    }

    return largest;
}
