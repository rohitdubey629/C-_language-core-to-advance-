#include <stdio.h>

int main()
{
    int h, s;
    printf("Enter the time in hour\n: ");
    scanf("%d", &h);
    s = 3600 * h; // converting hours to seconds
    printf("\nThe equivalent of %d hours is %d seconds.\n", h, s);
    return 0;
}