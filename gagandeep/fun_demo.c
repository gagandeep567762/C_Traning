#include <stdio.h>
int myadd (int a, int b)
{
    int sum = a+b;
    return sum;
}
void main()
{
    int a = 90;
    int b = 89;
    printf("%d",myadd(a,b));
    int c = 99;
    int d = 12;
    printf("%d",myadd(c,d));
    int e = 66;
    int f = 78;
    printf("%d",myadd(e,f));
}