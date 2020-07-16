#include <stdio.h>
#include <ctype.h>
#define EOL '\n'

int main()
{
	int cont, aux;
	char letras[80];
	/* leer texto en minusculas */
	for (cont = 0; (letras[cont] = getchar()) != EOL; ++cont)
		;

	aux = cont;
	/* escribir texto en mayusculas */
	for (cont = 0; cont < aux; ++cont)
		putchar(toupper(letras[cont]));
	putchar(EOL);
}
