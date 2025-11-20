//write a function which will accept and array,its size as n and return the difference between first and the last element
#include <stdio.h>
#include <stdlib.h>

int difference(int arr[], int n);

int main() 
{                                                                                                                            
    int arr[] = {10, 20, 30, 40};
    int n = 4;

    printf("Difference = %d", difference(arr, n));
    return 0;
}

int difference(int arr[], int n) {
    return arr[0] - arr[n - 1];
}
