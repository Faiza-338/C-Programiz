#include <math.h>
#include <stdio.h>
int main() {
   double a;
   printf("Enter a number:\n");
   scanf("%lf",&a);

   if(a>=0){
       printf("%lf is positive",a);
   }


   else if(a<=0){
       printf("%lf is negative",a);
   }
   else
   printf("Invalid number");
    return 0;
}
