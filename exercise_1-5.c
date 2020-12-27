#include <stdio.h> 

/* print Celsius - Fahrenheit table in reverse order */

int main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;				/* lower limit of temperature table */
	upper = 300;			/* upper limit 						*/
	step = 20;				/* step size 						*/

	celsius = upper;

	printf("Celsius\tFahrenheit table\n");

	while (celsius >= lower) {
		fahr = celsius * (9.0/5.0) + 32;
		printf("%3.0f\t%5.0f\n", celsius, fahr);
		celsius -= step;
	}
}