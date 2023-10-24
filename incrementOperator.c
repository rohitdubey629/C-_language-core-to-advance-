#include <stdio.h>

int main()
{
    int a;
    a = 1;
    a = (++a) + (a++) + (a++) + (++a);
    printf("Value of  A: %d\n", a);
}