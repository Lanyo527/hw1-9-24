#include <stdio.h>
#include <stdlib.h>
int main() {
	printf("number\tsquare\tcube\n");
	for (int i = 1; i <= 10; i++) {
		printf("%d\t%d\t%d\n", i, i * i, i * i * i);
	}
	system("pause");	
	return 0;
}