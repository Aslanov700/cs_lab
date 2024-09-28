#include <stdio.h>

int main() {
    int a, b, k, temp, sum = 0;

    printf("Enter two integers for the range [a, b]: ");
    scanf("%d %d", &a, &b);

    printf("Enter an integer k: ");
    scanf("%d", &k);

    
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    int i = a;  
    while (i <= b) {  
        if (i % k == 0) {  
            sum += i;  
        }
        i++;  
    }

    printf("The sum of elements divisible by %d in the range [%d, %d] is: %d\n", k, a, b, sum);

    return 0;
}