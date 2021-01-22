

/* write a loop equivalent to the for loop  -- for (i = 0; i < max_line - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
without using && or || */


enum loop { YES, NO };

enum loop cheсk = YES;

int main()
{
	int i = 0;

	while(cheсk == YES){

		if(i > max_line - 1)
 			cheсk = NO;
		else if((c = getchar()) == EOF)
			cheсk = NO;
		else if(c == '\n')
			cheсk = NO;
		else
			s[i] = c;
			i++;
	}
} 