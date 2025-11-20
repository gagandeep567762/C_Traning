#include<stdio.h>
#include<string.h>
main()
{
    char name [10] = "gagandeep";
    char new[100] = "hello";
    printf("%c", name [7]);
    printf("lenght of string is %d\n", strlen(name));
    strcat(new,name);
    printf("%s",new);

    printf("%zs", strstr(new, "H" ));
}