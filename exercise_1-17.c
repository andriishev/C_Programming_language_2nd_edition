#include <stdio.h>
#define MAXLINE 1000		/* maximum input line size */
#define MINLINE 80		/* minimum input line size */

int get_line(char s[], int max_line);


int main()
{
	int len;				/* current line length */
	char line[MAXLINE];			/* current input line */

	while ((len = get_line(line, MAXLINE)) > 0)
		if (len >= MINLINE) 
			printf("your input line is: %s\n", line);
		else
			printf("your input line is too short\n");
	
	return 0;

}

/* getline - read the line into s, return length */

int get_line(char s[], int max_line)
{
	int c, i;

	for (i = 0; i <max_line - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
