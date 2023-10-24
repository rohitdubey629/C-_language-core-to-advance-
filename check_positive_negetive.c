#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number");
    scanf("%d", num);
    if (num > 0) // checking for even numbers
    {
        printf("\nThe entered number is an positive number.");
    }
    else
        printf("\nThe entered number is not an negative number.");
    return 0;
}