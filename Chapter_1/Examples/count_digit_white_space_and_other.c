#include <stdio.h>

/* count the number of digits, white spaces and others */
int main() {

	int digits[10];
	int wsc, others;
	int c, i;
	
	wsc = others = 0;
	for (i = 0; i < 10; i++) {
		digits[i] = 0;
	}
	
	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9')
			++digits[c - '0'];
		else if (c == ' ' || c == '\t' || c == '\n')
			++wsc;
		else 
			++others;
	}

	for (i = 0; i < 10; i++) 
		printf("Digit %d: %d\n", i, digits[i]);
	printf("White spaces: %d\nOthers: %d\n", wsc, others);

	return 0;
}
