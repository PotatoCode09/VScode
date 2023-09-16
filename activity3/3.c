#include <stdio.h>

int main(){
   int array3[3], Biggest = 0;

   printf("Enter 3 Numbers: ");
   
   for (int i = 1; i < 3; i++)
   {
      scanf("%d", &array3[i - 1]);
      if (array3[i - 1] >= Biggest)
      {
         Biggest = array3[i - 1];
      }
   }
   printf("Highest value is %d", Biggest);
   return 0;
}