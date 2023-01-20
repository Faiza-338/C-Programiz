
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int dividend,divisor,quotient,remainder;

    printf("Enter a dividend:\n");
    scanf("%d",&dividend);

    printf("Enter a divisor:\n");
    scanf("%d",&divisor);

    quotient=dividend/divisor;

    remainder=dividend%divisor;

    printf("Quotient: %d\n",quotient);
    printf("Remainder: %d",remainder);

    return 0;
}
