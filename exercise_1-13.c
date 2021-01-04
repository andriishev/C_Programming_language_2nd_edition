#include <stdio.h>

/* program to print horizontal histogram of the lengths of words */

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word */

int main()
{
	int c ,char_count, h_index, state, i;

	char_count = 0;				// counting lengths of words
	h_index = 0;				// histogram index
	state = OUT;

	while((c = getchar()) != EOF)
	{	
		if(c != ' ' && c != '.' && c != '\n' && c != '\t'){
			++char_count;
			state = IN;
		}
		else if( state == IN){
			state = OUT;
			printf("%2d:",h_index++);
			for(i = 0; i < char_count; ++i){
				printf("#");
			}
			printf("\n");
			char_count = 0;
		}
	}
}


