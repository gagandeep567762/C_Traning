#include <stdio.h>
void main()
{
    int t;
    int sale;
    int q [3]={3,4,10};
    int c [3]={4,6,1};
    for (int i =0; i<3; i++ )
    {
        t = q[i]*c[i];
        sale = sale + t;
    }
    printf("total value is %d", sale);
}