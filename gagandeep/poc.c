//write a c function which will accept one input parameter are and returns the  perimeter of circle, declare pi as a constant
#include<stdio.h>
#define pi 3.14
float perimeter(float r)
{
    return 2 * pi * r;
}
void main()
{
    float r;
    printf("enter radiys:");
    scanf("%f",&r);
    float peri = perimeter(r);
    printf("perimeter of circle is: %.2f", peri);
}