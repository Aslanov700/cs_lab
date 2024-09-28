#include<stdio.h>
#include<math.h>
int main(){

float a, b, c;

float discriminant, root1, root2;
printf("Enter the values of a b c");
scanf("%f, %f, %f", &a, &b, &c);

discriminant = b*b - 4*a*c;

if (discriminant > 0)
{
    root1= (-b + sqrt(discriminant)) / (2*a);
    root2= (-b - sqrt(discriminant)) / (2*a);
printf("The equation has 2 roots");

}
else if(discriminant == 0) {

    root1= (-b) / (2*a);
    printf("The equation has one root");

}

else{

    printf("The equation has no real roots");
}



  return 0;

}