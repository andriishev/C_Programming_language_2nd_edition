#include <stdio.h>

/* program to remove one or more blanks by a single blank */

int main()
{
	int c, bl;

	bl = 0;			/* blank counter */

	while ((c = getchar()) != EOF){
		if (bl == 0){
			if(c == ' '){
			putchar(' ');
			++bl;
			}
		}
 		if (c != ' '){
			putchar(c);
			bl = 0;
		}
	}
}
