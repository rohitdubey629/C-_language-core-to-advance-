#include <stdio.h>

int main()
{

    int a, b, t;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("\n");
    printf("Enter the second number: ");
    scanf("%d", &b);

    t = a;
    a = b;
    b = t;
    printf("The swapped numbers are %d and %d\n", a, b);

    return 0;
}