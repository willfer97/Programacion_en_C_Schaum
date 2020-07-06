#include <stdio.h>

int main()
{
	char texto[80];
	int cont;

	for (cont = 0; cont < 60; ++cont)
		texto[cont] = getchar();

	for (cont = 0; cont < 60; ++cont)
		putchar(texto[cont]);
}
