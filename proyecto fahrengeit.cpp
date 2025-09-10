#include <stdio.h>
/* Escribe fahrenheit-Celsius*/
main()
{
	int fahr, celsius;
	int lower, upper, step;
	lower = 0;         /*limite mas bajo de la escala de temperatura*/
	upper = 300;       /*limite superior*/
	step = 20;         /*tamaño del salto*/
	
	fahr = lower; 
	while (fahr <= upper){
        celsius = 5 * (fahr-32) /9;
		printf ("%d\d\t%d\n", fahr, celsius);
fahr = fahr + step;
}
	}

