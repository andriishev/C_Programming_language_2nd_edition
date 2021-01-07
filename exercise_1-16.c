#include <stdio.h>
#define MAXLINE 1000	/* maximum input line size */

int get_line(char s[], int max_line);
void copy(char to[], char from[]);

int main()
{
	int len;				/* current line length */
	int max;				/* maximum lenght seen so far */
	char line[MAXLINE];			/* current input line */
	char longest[MAXLINE];			/* longest line saved */
	
	max = 0;
	while ((len = get_line(line, MAXLINE)) > 0){
		printf("%d, %s",len, line);
		if (len > max){
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)  				/* there was a line */
		printf("Longest line :%s\n", longest);
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

/* copy 'from' into 'to'; assume to is big enough */

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while((to[i] = from[i]) != '\0')
		i++;
}
