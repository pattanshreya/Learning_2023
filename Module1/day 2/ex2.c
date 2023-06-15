#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    char* ptr1 = (char*)a;
    char* ptr2 = (char*)b;
    char temp;

    for (size_t i = 0; i < size; i++) {
        temp = ptr1[i];
        ptr1[i] = ptr2[i];
        ptr2[i] = temp;
    }
}

int main() {
    int a = 5;
    int b = 10;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b, sizeof(int));

    printf("After swapping: a = %d, b = %d\n", a, b);

    double x = 3.14;
    double y = 2.71;

    printf("Before swapping: x = %.2f, y = %.2f\n", x, y);

    swap(&x, &y, sizeof(double));

    printf("After swapping: x = %.2f, y = %.2f\n", x, y);

    return 0;
}
