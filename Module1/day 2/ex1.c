#include <stdio.h>

void printExponent(double num) {
    unsigned long long* ptr = (unsigned long long*)&num;
    unsigned long long exponent;
    unsigned long long mask = 0x7FF0000000000000ULL;
    int shift = 52;

    exponent = (*ptr & mask) >> shift;

    printf("Exponent in Hex: 0x%llX\n", exponent);
    
    printf("Exponent in Binary: ");
    for (int i = 11; i >= 0; i--) {
        unsigned long long bit = (exponent >> i) & 1ULL;
        printf("%llu", bit);
    }
    printf("\n");
}

int main() {
    double num;

    printf("Enter a double number: ");
    scanf("%lf", &num);

    printExponent(num);

    return 0;
}
