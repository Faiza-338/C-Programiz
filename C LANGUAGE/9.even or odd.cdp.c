#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("Enter a numbers:\n");
    scanf("%d",&a);

   if(a%2==0){
     printf("Number is even");
   }
   else {
    printf("Number is odd");
   }
    return 0;
}
