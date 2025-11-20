//write a function which will accept two input parameter (x,y) and returns x square and y square
#include<stdio.h>
void square(int x, int y, int *sqx, int *sqy)
{
    *sqx = x*x;
    *sqy = y*y;
}
int main()
{
    int x = 5;
    int y = 10;
    int sqx, sqy;
    square(x,y, &sqx,&sqy);
    printf("square of x is: %d%d\n", sqx);
    printf("square of y is: %d%d\n", sqy);
    return 0;
} 
