#include <stdio.h>

/* count the lines in input */
int main() {

	int c  = 0;
	int lc = 0;

	while ((c = getchar()) != EOF)
		if (c == '\n')
			lc++;
	printf("Number of lines: %d\n", lc);

	return 0;
}
