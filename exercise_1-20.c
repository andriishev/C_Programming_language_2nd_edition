#include <stdio.h>

#define TABSTOP 7

/* program to replace tabs in the input with the proper number of blanks to space 
to the next tab stops */

int main()
{
	int c, nb, pos;

	nb = 0;			/* number of spaces */
	pos = 0;		/* character position */

	while((c = getchar()) != EOF)
	{
		if( c == '\t'){
			nb = TABSTOP - pos;
			while(nb >= 1){
				putchar(' ');
				nb--;
			}
			pos = 0;
		}
		else if( c == '\n'){
			putchar(c);
			pos = 0;
		}
		else{
			putchar(c);
			++pos;
		}
	}
}