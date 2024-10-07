#include<stdio.h>

int main()
{
int a, b, k, sum = 0;

printf("Enter the value of range [a, b] ");
scanf("%d %d", &a, &b);

printf("Enter the value of k");
scanf("%d", &k);

for(int i = a; i <= b; i++)
{
if(i % k == 0)
sum += i;
}

printf("The sum of elements divisible by %d in the range [%d %d] is: %d\n", k, a, b, sum);


    return 0;
}