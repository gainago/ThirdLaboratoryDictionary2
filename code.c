#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	
	int a = 5;
	int b;
	scanf("%d", &b);
	printf("difference between 5 and %d is %d\n", b, abs(a-b));
}
