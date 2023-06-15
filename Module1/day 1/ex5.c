#include <stdio.h>

int bit_operations(int num, int oper_type) {
    int result;

    switch (oper_type) {
        case 1:
            // Set 1st bit
            result = num | 0x00000001;
            break;
        case 2:
            // Clear 31st bit
            result = num & 0x7FFFFFFF;
            break;
        case 3:
            // Toggle 16th bit
            result = num ^ 0x00010000;
            break;
        default:
            printf("Error: Invalid operation type!\n");
            return 0; // Return 0 in case of an error
    }

    return result;
}

int main() {
    int num, oper_type;
    int result;

    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);

    printf("Enter operation type (1 for Set 1st bit, 2 for Clear 31st bit, 3 for Toggle 16th bit): ");
    scanf("%d", &oper_type);

    result = bit_operations(num, oper_type);

    printf("Result: %d\n", result);

    return 0;
}
