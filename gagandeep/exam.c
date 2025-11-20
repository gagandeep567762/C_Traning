#include <stdio.h>

void exam(int m1, int m2, int m3) {
    
    if (m1 >= 40 && m2 >= 40 && m3 >= 40)
        printf("Result: Pass\n");
    else
        printf("Result: Fail\n");
}

int main() {
    int m1, m2, m3;

    printf("Enter marks in 3 subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    exam(m1, m2, m3);

    return 0;
}