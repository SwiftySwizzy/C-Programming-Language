#include <stdio.h>

/* replace more than one blank spaces with only one from input to output */
int main() {

	int c;
	int last;
	
	while ((c = getchar()) != EOF) {
		if (c != ' ') {
			last = 0;
			putchar(c);
		}
		if (c == ' ' && !last) {
			last = 1;
			putchar(c);
		}
	}

	return 0;
}
