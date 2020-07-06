#include <stdio.h>
#include <ctype.h>

int main()
{
	char letras[80];
	int cont, auxiliar;

	/* leer la linea */

	for (cont = 0; (letras[cont] = getchar()) != '\n'; ++cont)
		;
/* apuntar al contador de caracteres */

	auxiliar = cont;

/* escribir la linea en mayusculas */

	for (cont = 0; cont < auxiliar; ++cont)
		putchar(toupper(letras[cont]));
	putchar('\n');
}
