#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number");
    scanf("%d", &num);
    if (num > 100)
    {
        printf("Welcome");
    }
    printf("%d", num);
    return 0;
}