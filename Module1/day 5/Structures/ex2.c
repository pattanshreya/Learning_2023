#include <stdio.h>

// Structure for complex number
struct Complex {
    float real;
    float imaginary;
};

// Function to read a complex number from the user
void readComplex(struct Complex* number) {
    printf("Enter the real part: ");
    scanf("%f", &(number->real));

    printf("Enter the imaginary part: ");
    scanf("%f", &(number->imaginary));
}

// Function to write a complex number
void writeComplex(struct Complex* number) {
    if (number->imaginary >= 0)
        printf("Complex number: %.2f + %.2fi\n", number->real, number->imaginary);
    else
        printf("Complex number: %.2f - %.2fi\n", number->real, -number->imaginary);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex* num1, struct Complex* num2) {
    struct Complex result;
    result.real = num1->real + num2->real;
    result.imaginary = num1->imaginary + num2->imaginary;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex* num1, struct Complex* num2) {
    struct Complex result;
    result.real = (num1->real * num2->real) - (num1->imaginary * num2->imaginary);
    result.imaginary = (num1->real * num2->imaginary) + (num1->imaginary * num2->real);
    return result;
}

int main() {
    struct Complex number1, number2, sum, product;

    printf("Enter the first complex number:\n");
    readComplex(&number1);

    printf("Enter the second complex number:\n");
    readComplex(&number2);

    printf("\n");

    printf("First complex number:\n");
    writeComplex(&number1);

    printf("Second complex number:\n");
    writeComplex(&number2);

    printf("\n");

    sum = addComplex(&number1, &number2);
    printf("Sum of the complex numbers:\n");
    writeComplex(&sum);

    product = multiplyComplex(&number1, &number2);
    printf("Product of the complex numbers:\n");
    writeComplex(&product);

    return 0;
}
