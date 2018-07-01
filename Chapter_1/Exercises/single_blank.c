#include <stdio.h>

/* replace more than one blank spaces with only one from input to output */
int main() {

	int c;
	int last;
	
	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\t') {
			last = 0;
			putchar(c);
		}
		if ((c == ' ' || c == '\t') && !last) {
			last = 1;
			putchar(' ');
		}
	}

	return 0;
}
