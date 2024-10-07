#include<stdio.h>

int main()
{
int n,i;
long long sum = 0, product = 1;

printf("Enter the value ");
scanf("%d", &n);

for(int i = 1; i <= n; i++)
{
    int xi = 2 * i + 1;
    sum += xi;
    product *= xi;
}


printf("%lld\n", sum);
printf("%lld\n", product);





    return 0;
}