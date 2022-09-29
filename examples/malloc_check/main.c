#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char **argv) {
   char *p;
   p = malloc(argv[0]);
   strcpy(p, argv[0]);
   printf("Copied program: %s\n", p);
   return 0;
}
