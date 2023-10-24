#include <stdio.h>

int main()
{
    int a, b;
    a = 1;
    b = --a;
    printf("Value of  A: %d\n", a);
    printf("Value of B: %d\n", b);
    a = 1;
    b = a--;
    printf("Value of  A: %d\n", a);
    printf("Value of B: %d\n", b);
    return 0;
}