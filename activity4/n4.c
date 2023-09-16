#include <stdio.h>

int main(){
   int a = 75, b = 100, c = 99, d = 88, servings;
   char choice;

   printf("          Menu           Price\na. Chicken Combo..........P75.00\nb. Sweet and Sour Fish....P100.00\nc. Chopsuey...............P99.00\nd. Pork Chop..............P88.00\n\n");
   printf("Choose Your Meal ^^: \n");
   scanf("%c", &choice);
   printf("How many servings? \n");
   scanf("%d", &servings);

   switch (choice)
   {
      case 'a':
         a = a * servings;
         printf("%d serving/s of Chicken Combo, P%d is the total, thank you for ordering!! ^^", servings, a);
         break;
      case 'b':
         b = b * servings;
         printf("%d serving/s of Sweet and Sour Fish, P%d is the total, thank you for ordering!! ^^", servings,  b);
         break;
      case 'c':
         c = c * servings;
         printf("%d serving/s of Chopsuey, P%d is the total, thank you for ordering!! ^^", servings, c);
         break;
      case 'd':
         d = d * servings;
         printf("%d serving/s of Pork Chop, P%d is the total, thank you for ordering!! ^^", servings, d);
         break;
      default:
         printf("That shi ain't on the menu boi");
         break;
   }
   return 0;
}