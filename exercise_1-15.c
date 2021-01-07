#include <stdio.h>

/* print Fahrenheit - Celsius table */

float temp_conver(float fahr);

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; 					/* lower limt of temperature */
	upper = 300; 					/* upper limit */
	step = 20;					/* step size */
	
	fahr = lower;

	printf("Fahr\tCelsius Table\n");		/* printing  a heading above the table */
	
	while(fahr <= upper){
		printf("%3.0f\t%5.1f\n", temp_conver(fahr));
		fahr += step;
	}
}

/* converting Fahrenheit to Celsius */

float temp_conver(float fahr)
{
	return (5.0/9.0) * (fahr - 32.0);
}
