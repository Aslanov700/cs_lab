#include<stdio.h>

int main()
{
int n;
float num, sum = 0.0;

printf("Enter the value");
scanf("%d", &n);

for(int i = 1; i < n; i++)
{
printf("Enter a float");
scanf("%f", &num);
sum += num;
}


printf("Sum of the floats: %1.f\n",sum );

    return 0;
}