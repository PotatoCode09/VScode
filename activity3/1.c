#include <stdio.h>

int main(){
   int num;

   printf("Number: ");
   scanf("%d", &num);

   if ( num >= 0 && num <= 99999)
   {
      if (num % 2 == 0)
      {
         printf("\nNumber is Even");
      }
      else
      {
         printf("\nNumber is Odd");
      }
   }

   if ( num < 0 || num > 99999)
   {
      if (num < 0)
      {
      printf("number must be non-negative!");
      }
      else if( num > 99999);
   }
   return 0;
}