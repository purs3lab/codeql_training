#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv) {
	char src[10];
	scanf("%10s", src);
	printf("%s", argv[0]);
	printf(src, argv[0]);
	return 0;
}
