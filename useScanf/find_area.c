#include <stdio.h>

int main()
{
    int l, b, a;
    printf("Enter length of the rectangle: ");
    scanf("%d", &l);
    printf("\n");
    printf("Enter breadth of the rectangle: ");
    scanf("%d", &b);
    a = l * b;
    printf("\nArea of the rectangle is %d\n", a);
    return 0;
}