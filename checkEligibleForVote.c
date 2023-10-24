#include <stdio.h>

int main()
{
    int age, voterId, nationality;
    printf("Enter the age");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("\nEnter your nationality");
        scanf("%d", &nationality);
        if (nationality == 91)
        {
            printf("Enter voter id");
            scanf("%d", &voterId);
            if (voterId >= 1 && voterId <= 99)
            {
                printf("You are eligible for vote");
            }
            else
            {
                printf("Your voter id is not valid");
            }
        }
        else
        {
            printf("Sorry you cannot voter in india");
        }
    }
    else
    {
        printf("Sorry you are not eligible for voting your age less then 18");
    }
}