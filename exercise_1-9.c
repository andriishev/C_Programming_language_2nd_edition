#include <stdio.h>

int main()
{
	int c, bl;

	bl = 0;			/* blank counter */

	while((c = getchar()) != EOF){
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