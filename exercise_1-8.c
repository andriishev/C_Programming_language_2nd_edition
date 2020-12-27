#include <stdio.h>

/* program to count blanks, tabs, and newlines */

int main()
{
	int c , nl, bl, tb;

	nl = 0;				/* newlines counter */
	bl = 0;				/* blanks counter */
	tb = 0;				/* tabs counter */


	while((c = getchar()) != EOF)
	{
		if (c == '\n')
			++nl;
		else if (c == ' ')
			++bl;
		else if (c == '\t')
			++tb;
	}
	printf("Total number of newlines = %d; blanks = %d; tabs = %d\n",nl, bl, tb);
}