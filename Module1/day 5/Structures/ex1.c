#include <stdio.h>

// Define the structure for the box
struct Box {
    float length;
    float width;
    float height;
};

// Function to calculate the volume of the box
float calculateVolume(struct Box* box) {
    return box->length * box->width * box->height;
}

// Function to calculate the total surface area of the box
float calculateSurfaceArea(struct Box* box) {
    return 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    // Declare a variable of type Box
    struct Box myBox;

    // Prompt the user to enter the dimensions of the box
    printf("Enter the length of the box: ");
    scanf("%f", &myBox.length);

    printf("Enter the width of the box: ");
    scanf("%f", &myBox.width);

    printf("Enter the height of the box: ");
    scanf("%f", &myBox.height);

    // Calculate the volume and surface area using structure pointer with (*) and (.) operators
    float volume = calculateVolume(&myBox);
    float surfaceArea = calculateSurfaceArea(&myBox);

    // Print the calculated volume and surface area
    printf("Volume of the box: %.2f\n", volume);
    printf("Total surface area of the box: %.2f\n", surfaceArea);

    return 0;
}
