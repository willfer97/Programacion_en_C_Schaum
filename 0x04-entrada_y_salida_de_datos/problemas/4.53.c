#include <stdio.h>

int main()
{
	char texto[80];
	int cont, temp;

	for (cont = 0; (texto[cont] = getchar()) != '\n'; ++cont)
		;

	temp = cont;

	for (cont = 0; cont < temp; ++cont)
		putchar(texto[cont]);
}
