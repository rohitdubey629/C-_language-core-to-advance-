#include <stdio.h>

int main()
{
    int num, squire, r, t;

    scanf("%d", &num); // 9   9*9 81 8+1  9
    squire = num * num;
    r = squire % 10;
    t = squire / 10;
    if (r + t == num)
    {
        printf("The number is valid\n");
    }
    else
    {
        printf("The number is invalid\n");
    }
    return 0;
}