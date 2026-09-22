#include <stdio.h>
#include <stdlib.h>
//car-pooling calculation
//total miles driven per day
//cost per gallon of gas
//parking fees per day
//tolls per day
int main() {
	float total_miles, cost_per_gallon, parking_fees, tolls, miles_per_gallon, total_cost;
	// Get user input
	printf("Enter total miles driven per day: ");
	scanf_s("%f", &total_miles);
	printf("Enter cost per gallon of gas: ");
	scanf_s("%f", &cost_per_gallon);
	printf("Enter parking fees per day: ");
	scanf_s("%f", &parking_fees);
	printf("Enter tolls per day: ");
	scanf_s("%f", &tolls);
	printf("Enter miles per gallon of your vehicle: ");
	scanf_s("%f", &miles_per_gallon);
	// Calculate total cost
	total_cost = (total_miles / miles_per_gallon) * cost_per_gallon + parking_fees + tolls;
	// Display the result
	printf("Total cost of car-pooling per day: $%.2f\n", total_cost);
	return 0;
}