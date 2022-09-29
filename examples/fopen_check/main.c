#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char **argv) {
   char *p;
   FILE *fp;
   p = getenv("HELO");
   fp = fopen(p, "rw+");
   fwrite("Help", 4, 1, fp);
   return 0;
}
