//write a c programadd three numbers
#include <stdio.h>
void add(int *a,int *b,int *c)
{
    int sum = (*a)+(*b)+(*c);
    printf("%d ", sum);
}
void main()
{
    int a = 8;
    int b = 9;
    int c = 4;
    add(&a, &b, &c);
}    