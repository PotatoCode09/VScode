#include <stdio.h>

int main(){
   float i;
   printf("Input Grade: ");
   scanf("%f", &i);

   if (i >= 75)
   {
      printf("Passed!!");
   }
   else
   {
      printf("Failed!!");
   }
   return 0;
}