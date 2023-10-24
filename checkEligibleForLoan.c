#include <stdio.h>

int main()
{
    int age, salary;
    printf("Enter your Age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Enter your salary");
        scanf("%d", &salary);
        if (salary > 5000)
            printf("You are eligible for loan of Rs 20000");
        else
            printf("Sorry you are not eligible for loan your salary is less then 10000");
    }
    else
    {
        printf("You are not eligible for loan your age is less the 18");
    }
    return 0;
}