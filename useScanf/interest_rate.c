#include <stdio.h>

int main()
{

    int p, r, t, si;
    printf("Enter Principal amount: ");
    scanf("%d", &p);
    printf("\nEnter Rate of interest in percentage: ");
    scanf("%d", &r);
    printf("\nEnter Time period for which the money is to be paid: ");
    scanf("%d", &t);
    si = (p * r * t) / 100;
    printf("\nSimple Interest is %d\n", si);
    return 0;
}