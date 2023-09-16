#include <stdio.h>

int main(){
   float dividen, divisor,quotient;

   printf("Enter dividen: ");
   scanf("%d", &dividen);
   printf("Enter divisor: ");
   scanf("%d", &divisor);

   if(divisor > 0)
   {
      quotient = dividen / divisor;
      printf("The quotient is: %f", quotient);
   }
   else
   {
      printf("Dividen must be greater than zero!");
   }
   return 0;
}