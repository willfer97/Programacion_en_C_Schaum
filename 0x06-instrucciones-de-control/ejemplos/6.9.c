#include <stdio.h>
#include <ctype.h>
#define EOL '\n'

int main()
{
	int cont = 0, aux;
	char letras[80];

	while ((letras[cont] = getchar()) != EOL)
		++cont;

	aux = cont;

	cont = 0;

	while (cont < aux)
	{
		putchar(toupper(letras[cont]));
		++cont;
	}
}
