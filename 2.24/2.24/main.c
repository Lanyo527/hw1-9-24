#include <stdio.h>
#include <stdlib.h>
int main() {
	printf("enter in a number:");
	int num;
	scanf_s("%d", &num);
	num % 2 == 0 ? printf("even\n") : printf("odd\n");
	return 0;
}