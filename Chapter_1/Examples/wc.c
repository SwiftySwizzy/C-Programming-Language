#include <stdio.h>

#define IN  1	/* inside a word */
#define OUT 0	/* outside a word */

/* counts the number of lines, words and characters in the input */
int main() {

	int c, nl, nc, nw, state;
	
	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\t' || c == '\n') 
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	
	printf("Line count: %d\nWord count: %d\nCharacter count: %d\n", nl, nw, nc);	
}
