#include<stdio.h>

/* Print the Celsius-Fahrenheit table
	for celsius = 0, 20, .... 300 floating point version
   Print the table with a heading before the conversion */

int main() {

	float fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit of temperature table */
	step = 20;	/* step size */

	celsius = lower;
	printf("Celsius\t\tFehrenheit\n");
	while(celsius <= upper) {
		fahr = (1.8 * celsius) + 32.0;
		printf("%.0f\t\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	
	return 0;
}
