#include <stdio.h>

int main()
{
    int h, e, m, s, so, total;
    int average;
    printf("Enter the marks: \n");
    scanf("%d %d %d %d %d", &h, &e, &m, &s, &so);
    total = h + e + m + s + so; // calculate the total marks of student
    average = total / 5;        // calculate the average marks of student
    printf("%d", average);
    if (average >= 90)
    {
        printf("\n total number: %d average: %dGrade is A+.", total, average);
    }
    else if (average >= 85 && average <= 89)
    {
        printf("\ntotal number: %d average: %d Grade is A.", total, average);
    }
    else if (average >= 80 && average <= 84)
    {
        printf("\ntotal number: %d average: %d Grade is B+.", total, average);
    }
    else if (average >= 75 && average <= 79)
    {
        printf("\ntotal number: %d average: %d Grade is B.", total, average);
    }
    else if (average >= 70 && average <= 74)
    {
        printf("\ntotal number: %d average: %d Grade is C+.", total, average);
    }
    else if (average >= 65 && average <= 69)
    {
        printf("\ntotal number: %d average: %d Grade is C.", total, average);
    }
    else
    {
        printf("\ntotal number: %d average: %d Grade is F.", total, average);
    }
    return 0;
}