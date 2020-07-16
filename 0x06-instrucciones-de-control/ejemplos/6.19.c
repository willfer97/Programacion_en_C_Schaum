#include <stdio.h>
#include <ctype.h>
#define EOL '\n'

int main()
{
	int aux, cont;
	char letras[80];

	while ((letras[0] = getchar()) != '*')
	{
		for (cont = 0; (letras[cont] = getchar()) != EOL; ++cont)
			;
		aux = cont;

		for (cont = 0; cont < aux; ++cont)
			putchar(toupper(letras[cont]));
		printf("\n\n");
	}
	printf("Hasta luego\n");
}
