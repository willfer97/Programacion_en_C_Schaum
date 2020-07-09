/* Invertir letras mayusculas de minusculas */
#include <stdio.h>
#include <ctype.h>

int main()
{
	int cont, aux;
	char c, texto[80];

	/* ingresar datos */
	printf("Ingrese una palabra con mayusculas y minusculas invertidas\n");

	for (cont = 0; (texto[cont] = getchar()) != '\n'; ++cont)
		;

	aux = cont;

	/* salida de datos */

	for (cont = 0; cont < aux; ++cont)
	{
		c = islower(texto[cont]) ? toupper(texto[cont]) : tolower(texto[cont]);
		putchar(c);
	}
	putchar('\n');

}
