#include <stdio.h>

int main(){
   int num;

   printf("Enter Number: ");
   scanf("%d", &num);
   
   printf("Number is: ");

   if (num > 0)
   {
      printf("Positive, ");
   }
   else printf("Negative, ");

    if (num % 5 == 0 && num % 8 == 0 )
   {
      printf("Divisible by both 8 and 5\n");
   }
   else if(num % 5 == 0)
   {
      printf("Divisible by 5");
   }
   else if(num % 8 == 0)
   {
      printf("Divisible by 8");
   }

}