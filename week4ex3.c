#include<stdio.h>

int main()
{
int n;
double hormonic_sum = 0.0;

printf("Enter the value ");
scanf("%d", &n);

for(int i = 1; i <= n; i++)
{
    hormonic_sum += 1.0 / i;
}


printf("Harmonic_sum %.3f\n", hormonic_sum);

    return 0;
}