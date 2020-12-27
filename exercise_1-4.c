#include <stdio.h>

/* print Celsius - Fahrenheit table */

int main()
{
	int celsius;

	printf("Celsius\tFahr Table\n");

	for(celsius = 0; celsius <= 300; celsius = celsius + 20){
		printf("%d\t%5.0f\n", celsius, celsius /(5.0/9.0) + 32.0);
	}
}