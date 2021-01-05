#include <stdio.h>

/* program to print vertical histogram of the lengths of words */

#define IN 1	   /* inside a word */
#define OUT 0	   /* outside a word */
#define SIZE 50    /* size of the array */

int main()
{
	int c ,char_count, state, index, i, j, l_w;
	int words_lenght[SIZE];

	char_count = 0;						/* counting lengths of words */
	l_w = 0;						/* longest word in the array */
	index = 0;
	state = OUT;
	
	for(i = 0; i < SIZE; i++){				/* assigning 0 to array */
		words_lenght[i] = 0;
	}

	while((c = getchar()) != EOF)
	{	
		if(c != ' ' && c != '.' && c != '\n' && c != '\t'){
			++char_count;
			state = IN;
		}
		else if( state == IN){				
			state = OUT;
			words_lenght[index] = char_count;
			char_count = 0;
			++index;
		}
	}
	
	for(index = 0; index < SIZE; index++){			/* looking for the longest word in the array */
		if(words_lenght[index] > l_w)
		l_w = words_lenght[index];
	}

	for(j = l_w; j >= 1; j--){				/* printing vertical histogram */
		for(index = 0; index < SIZE; index++){
			if( words_lenght[index] == j){
				printf(" # ");
				words_lenght[index]--;
			}
			else 
				printf("   ");
		}
		printf("\n");
	}
}

 


