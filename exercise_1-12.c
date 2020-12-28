#include <stdio.h>

/* program to print its input one word per line */

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word */

int main()
{
	int c, state;

	state = OUT;

	while((c = getchar()) != EOF){
		if(c != ' ' && c != '\n' && c != '\t'){
			state = IN;
			putchar(c);
		}
		else if(state == IN){
			state = OUT;
			putchar('\n');
		}
	}
}