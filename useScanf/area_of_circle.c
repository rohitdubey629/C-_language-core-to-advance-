#include <stdio.h>

int main()
{
    int r;
    float a, pi = 3.14;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    a = pi * (float)r * r;
    printf("The area of the circle is %.2f\n", a);
    return 0;
}