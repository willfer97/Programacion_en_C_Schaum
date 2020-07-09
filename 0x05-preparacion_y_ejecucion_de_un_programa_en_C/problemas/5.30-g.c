#include <stdio.h>

int main()
{
	char a, b, c, d, e;

	printf("\nIntroduce una palabra de 5 caracteres para codificarla: ");
	scanf(" %c %c %c %c %c", &a, &b, &c, &d, &e);

	printf("\nPalabra Codificada: %c%c%c%c%c\n\n", a -= 30, b -= 30, c -= 30, d -= 30, e -= 30);
}
