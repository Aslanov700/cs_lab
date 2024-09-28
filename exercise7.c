#include <stdio.h>

int main() {
    float radius, width, length, height;
    float diameter;

    
    printf("Enter the radius of the basketball: ");
    scanf("%f", &radius);
    printf("Enter the width, length, and height of the box: ");
    scanf("%f %f %f", &width, &length, &height);

    
    diameter = 2 * radius;

    
    if (diameter <= height) {
        printf("Yes, you can send the basketball in this box.\n");
    } else {
        printf("No, the basketball cannot fit in this box.\n");
    }

    return 0;
}