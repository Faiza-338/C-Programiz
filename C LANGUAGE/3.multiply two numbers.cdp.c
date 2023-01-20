
#include <stdio.h>
#include <stdlib.h>

int main()
{
   double a,b,mul;

    printf("Enter two number:\n");
    scanf("%lf %lf",&a,&b);

    mul=a*b;
    printf(" %.2lf",mul);

    return 0;
}
