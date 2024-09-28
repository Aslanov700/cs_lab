#include <stdio.h>

int main() {
    int n, i = 1;
    long long sum = 0, product = 1;

    printf("Enter a value for n (1 or greater): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("The entered value must be 1 or greater.\n");
 
    }

    while (i <= n) {
        int xi = 3 * i - 1;
        sum += xi;
        product *= xi;
        i++;  
    }

    printf("Sum: %lld\n", sum);
    printf("Product: %lld\n", product);

    return 0;
}