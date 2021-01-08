#include <stdio.h>
#define MAXLINE 1000
#define MINLINE 10

int get_line(char s[], int max_line);
void reverse(char c[], int s, char new_line[]);


int main()
{
	int len;				/* current line length */
	char line[MAXLINE];		/* current input line */
	char r_line[MAXLINE];	/* reverse line */

	while ((len = get_line(line, MAXLINE)) > 0){
		if (len >= MINLINE){
			reverse(line,len,r_line);
			printf("your reverse input line :%s", r_line);
		}
		else
			printf("your input line is too short\n");
	}
	
	return 0;

}

/* getline - read the line into s, return length */

int get_line(char s[], int max_line)
{
	int c, i;

	for (i = 0; i < max_line - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n'){
		s[i] = '\n';
		++i;
	}
	s[i] = '\0';
	return i;
}

/* function to reverse character string */
void reverse(char c[], int s, char new_line[])
{	
	int j,i = s - 2;

	for (j = 0; j < s - 1; j++){

		new_line[j] = c[i];
		--i;
	}
	new_line[j] = '\n';
	j++;
	new_line[j] = '\0';
}