#include <stdio.h>

int main(){
   float charge5km = 34.50, addFair3k = 7.60, prod, totalCharge;
   int distance, totalDistance;

   printf("How far?(kms): ");
   scanf("%d", &distance);

   totalDistance = distance;
   distance = distance - 5;
   
   prod = distance / 3;
   totalCharge = charge5km + prod * addFair3k;
   

   printf("The total charge for %dkms is %.2f", totalDistance, totalCharge);
   return 0;
}