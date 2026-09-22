#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b;
	printf("enter two numbers: ");
	scanf_s("%d %d", &a, &b);
	a% b == 0 ? printf("%d is divisible by %d\n", a, b) : printf("%d is not divisible by %d\n", a, b);
	system("pause");
	return 0;
}