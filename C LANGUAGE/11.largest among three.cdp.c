#include <stdio.h>
#include <stdlib.h>

int main()
{
   double a,b,c,max;
   printf("Enter three numbers:\n");
   scanf("%lf %lf %lf",&a,&b,&c);

    if(a>=b && a>=c){
        max=a;
         printf("%.2lf is the largest",max);
    }
    else if(b>=a && b>=c){
        max=b;
        printf("%.2lf is the largest",max);
    }
    else{
        max=c;
    printf("%.2lf is the largest",max);
    }


    return 0;
}
