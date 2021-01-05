#include <stdio.h>

/* program to print a histogram of frequencies fo different characters in its input */

int main()
{
	int histogram[52];
	int c, i, j;

	for(i = 0; i <= 52; ++i)			/* assigning 0 to an array */
		histogram[i] = 0;

	while((c = getchar()) != EOF){			/* assignig frequencies of char to an array */
		if(c >= 'a' && c <= 'z') 
			histogram[c - 'a']++;
		else if(c >= 'A' && c <= 'Z')
			histogram[c - '&']++;
	}

	for (i = 0; i < 26; ++i){			/* printing frequencies of lowercase char */
		printf("%c: ", 'a' + i);
		for (j = 0; j < histogram[i]; ++j)
			putchar('#');
		putchar('\n');
	}

	for (i = 27; i <= 52; ++i){			/* printing frequencies of uppercase char */
		printf("%c: ", '&' + i);
		for (j = 0; j < histogram[i]; ++j)
			putchar('#');
		putchar('\n');
	}
}
