#include <stdio.h>
void main()
{
int result = 1;
int n;
printf("enter the n natural numbers");
scanf("%d", &n);
for (int i=1; i<=n; i++)
{
    result = result * i;
}
printf("product is %d", result);
}