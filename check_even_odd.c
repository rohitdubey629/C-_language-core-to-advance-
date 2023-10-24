#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number");
    scanf("%d", &num);
    if (num % 2 == 0) // checking for even numbers
    {
        printf("\nThe entered number is an even number.");
    }
    else
        printf("\nThe entered number is an odd number.");
    return 0;
}