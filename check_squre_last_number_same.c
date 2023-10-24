#include <stdio.h>

int main()
{
    int num, squire;
    printf("Enter a number: ");
    scanf("%d", &num);
    squire = num * num;
    if (squire % 10 == num)
    {
        printf("\nThe square of %d is %d and it ends with the same digit as the original number.", num, squire);
    }
    else
    {
        printf("The square of %d is not equal to the last digit of it.", num);
    }
    return 0;
}