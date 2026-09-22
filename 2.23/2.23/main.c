#include <stdio.h>
#include <stdlib.h>
int main() {
	int n[3];
	printf("enter three integers separated by commas: ");
	scanf_s("%d,%d,%d", &n[0],&n[1],&n[2]);
	
	int max=n[0], min=n[0];
	for (int i = 1; i < 3; i++) {
		if (n[i] > max) {
			max = n[i];
		}
		if (n[i] < min) {
			min = n[i];
		}
	}
	printf("Maximum: %d\n", max);
	printf("Minimum: %d\n", min);

	system("pause");
    return 0;
}