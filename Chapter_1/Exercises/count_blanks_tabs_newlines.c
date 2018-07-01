#include <stdio.h> 

/* count the number of blank spaces, tabs and newlines in input */
int main() {
	
	int bc   = 0;
	int tabc = 0;
	int nlc  = 0;
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			bc++;
		if (c == '\t')
			tabc++;
		if (c == '\n')
			nlc++;
	}
	printf("Blank spaces: %d\nTabs: %d\nNew lines: %d\n", bc, tabc, nlc);

	return 0;
}
