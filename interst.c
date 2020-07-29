#include <stdio.h>

int main()
{

    int principal, rate, years, simpleInterst;
    printf("How Many Money You Toke At Loan : ");
    scanf("%d", &principal);

    printf("What Is The Loan Rate : ");
    scanf("%d", &rate);

    printf("After How Many Years Will You Return The Money : ");
    scanf("%d", &years);
    simpleInterst = (principal * rate * years) / 100;
    printf("The Value Of Simple Interst %d", simpleInterst);
    return 0;
}