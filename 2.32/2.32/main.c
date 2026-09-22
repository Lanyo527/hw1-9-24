#include <stdio.h>
#include <stdlib.h>
int main() {
	printf("BMI calculate!\nenter weight(kg) and height(m): ");
	float weight, height,bmi;
	scanf_s("%f %f", &weight, &height);
	bmi = weight / (height * height);
	printf("BMI: %.2f\nBMI Values:", bmi);
	if (bmi >= 30) {
		printf("Obese\n");
	}
	else if (bmi >= 25) {
		printf("Overweight\n");
	}
	else if (bmi >= 18.5) {
		printf("Normal\n");
	}
	else {
		printf("Underweight\n");
	}
	system("pause");
	return 0;
}