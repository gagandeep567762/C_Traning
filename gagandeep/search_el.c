#include <stdio.h>
int search (int arr[], int key, int n)
{
    for (int i =0; i<n ; i++)
    {
        if (arr[i]==key)
        return 1;
    }
    return 0;
}
void main ()
{
    int a[4]={66,33,44,55};
    int n = 4;
    int key;
    printf("enter the key number");
    scanf("%d",&key);
    printf("%d", search(a,key,n));
}