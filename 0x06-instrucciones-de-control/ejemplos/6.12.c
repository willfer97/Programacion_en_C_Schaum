#include <stdio.h>
#include <ctype.h>
#define EOL '\n'

int main()
{
	int cont = -1, aux;
	char letras[80];

	do
		++cont;
	while ((letras[cont] = getchar()) != EOL);


	aux = cont;

	cont = 0;

	do
	{
		putchar(toupper(letras[cont]));
		++cont;
	}
	while (cont < aux);
}
