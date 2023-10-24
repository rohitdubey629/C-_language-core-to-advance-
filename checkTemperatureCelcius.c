#include <stdio.h>

int main()
{
    int c;
    float f;
    printf("Enter a Celsius temperature: ");
    scanf("%d", &c);
    // Converting to Fahrenheit formula (F = C * 9/5 + 32)
    f = ((float)c * 9 / 5) + 32;
    printf("\n%.1f degrees Celsius is equal to %.1f degrees Fahrenheit.\n\n", c, f);
    return 0;
}