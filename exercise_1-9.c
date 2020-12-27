#include <stdio.h>

int main()
{
	int c, bl;

	bl = 0;			/* blank counter */

	while((c = getchar()) != EOF){
		if(c == ' ' && bl == 0){
			putchar(' ');
			++bl;
		}
 		else if (c != ' '){
			putchar(c);
			bl = 0;
		}
	}
}
