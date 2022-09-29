#include<stdio.h>
#include<stdlib.h>
int main() {
   short i, j;
   int k;
   printf("Enter two shorts:\n");
   scanf("%hi %hi", &i, &j);
   // faulty overflow check.
   if ((i+j) < i) {
      printf("Overflow Detected\n");
      return -1;
   }
   // Valid overflow check.
   if (i+k < k) {
      printf("Overflow Detected\n");
   }
   printf("No overflow. All Good\n");
   printf("i=%hx,j=%hx, i+j=%hx\n", i, j, i+j);
   return 0;

}
