#include <stdio.h>
#define MAXLINE 1000
#define MINLINE 10

int get_line(char s[], int max_line);
void f_remove(char c[]);


int main()
{
	int len;				/* current line length */
	char line[MAXLINE];			/* current input line */

	while ((len = get_line(line, MAXLINE)) > 0)
		if (len > MINLINE){
			f_remove(line);
			printf("your input line is: %s", line);
		}
		else
			printf("your input line is too short\n");
	
	return 0;
}

/* getline - read the line into s, return length */

int get_line(char s[], int max_line)
{
	int c, i;

	for (i = 0; i < max_line - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* function to reomve trailing blanks and tabs from each input */
void f_remove(char c[])
{	
	int i = 0;

	while(c[i] != '\n')
		i++;
	i--;
	while(i >= 0 && (c[i] == ' ' || c[i] == '\t'))
		i--;
	if(i >= 0){
		i++;
		c[i] = '\n';
		i++;
		c[i] = '\0';
	}
}
