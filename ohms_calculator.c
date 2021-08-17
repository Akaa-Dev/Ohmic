
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//Calculates resistance by dividing voltage(u) by current(i)
	float u, i,r;
	printf("Please enter voltage in volt, U:");
	scanf("%f", &u);
	printf("Please enter current in ampere,I:");
	scanf("%f", &i);
	r = u / i;   // divides the voltage and inputs of the user 
	printf("The resistance of the consumer is %f", r);
	return 0;
}
