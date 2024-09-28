#include <stdio.h>

int main() {
    float a, b, c;

    
    printf("Enter the lengths of three sticks: ");
    scanf("%f %f %f", &a, &b, &c);

    
    if (a + b > c && a + c > b && b + c > a) {
        printf("Yes, you can form a triangle with these sticks.\n");
    } else {
        printf("No, you cannot form a triangle with these sticks.\n");
    }

    return 0;
}