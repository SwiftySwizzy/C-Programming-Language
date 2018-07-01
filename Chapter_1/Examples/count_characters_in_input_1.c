#include <stdio.h>

/* count characters in input 1st version */
int main() {
	
	long char_count = 0;

	while (getchar() != EOF)
		char_count++;
	printf("Character count: %ld\n", char_count);

	return 0;
}
