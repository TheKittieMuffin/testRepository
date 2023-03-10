#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int x,y;
	printf("x = ");
	scanf("%i", &x);
	printf("y = ");
	scanf("%i", &y);
	printf("x is %s than y\n", x >= y ? "greater than or equal to" : "less than");
	return EXIT_SUCCESS;
}
