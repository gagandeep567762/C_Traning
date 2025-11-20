//write a function which will accept three parameters l,b,h and return the volume of cube
#include<stdio.h>
int volume(int l,int b,int h)
{
int volume=l*b*h;
return volume;
}
void main()
{
int l=3,b=5,h=8;
printf("enter volume is %d",volume(l,b,h));
}