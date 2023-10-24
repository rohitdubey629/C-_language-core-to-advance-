#include <stdio.h>

int main()
{
    int num, sum = 0, i;

    printf("Enter the number");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            sum++;
        }
    }
    if (sum == 2)
    {
        printf("The number is a perfect number.");
    }
    else
    {
        printf("The number is not a perfect number.");
    }
    return 0;
}