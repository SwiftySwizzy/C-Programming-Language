#include <stdio.h>

#define LOWER 0		/* lower limit of the table */
#define UPPER 300	/* upper limit of the table */
#define STEP  20	/* step size */

int main() {
	
	int fahr;
	
	printf("Fahrenhein\tCelsius\n");
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
		printf("%3d\t\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32.0));
	}
	
	return 0;
}
