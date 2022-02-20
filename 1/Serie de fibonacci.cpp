#include <stdlib.h>
#include <stdio.h>

int  fib (int N)
{
	if (N<=1)
	return N;
	return fib(N-1)+ fib(N-2);

	if (N<0)
		return -1;
}
main ()
{
printf("*******************");
printf("*suma de FIBONACCI*");
printf("*******************");
int serie_fib;
int numero;
printf ("\n ingrese un numero para calcular su serie de Fibonacci: ");
scanf ("%d", &numero);
serie_fib = fib (numero);
if (serie_fib<0)
printf ("\n  El numero no es valido...\n");
else 
printf ("\n El valor de la serie de Fibonacci   %d es: %d\n",numero, serie_fib);
system ("pause");
}