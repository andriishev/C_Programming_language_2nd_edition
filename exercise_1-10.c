#include <stdio.h>

/* program to replace each tab by '\t', backspace by '\b' and backsalsh by '\\' */

int main()
{
	int c;

	while((c = getchar()) != EOF){
		if(c == '\t'){
			putchar('\\');
			c = 't';
		}
		if(c == '\b'){
			putchar('\\');
			c = 'b';
		}
		if(c == '\\'){
			putchar('\\');
		}
		putchar(c);
	}
}
