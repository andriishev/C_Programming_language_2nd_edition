#include <stdio.h>

#define TABSTOP 7

int main()
{
	int c, nb, pos;

	nb = 0;
	pos = 0;
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