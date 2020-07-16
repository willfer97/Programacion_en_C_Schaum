#include <stdio.h>

int main()
{
	int cont;
	char linea[80];

	printf("Escribe una linea de texto para codificarla\n");
	scanf("%[^\n]", linea);

	for (cont = 0; linea[cont] != '\0'; ++cont)
	{
		if ((linea[cont] >= '0' && linea[cont] < '9') || (linea[cont] >= 'A' && linea[cont] < 'Z') || (linea[cont] >= 'a' && linea[cont] < 'z'))
			putchar(linea[cont] + 1);
		else if (linea[cont] == '9')
			putchar('0');
		else if (linea[cont] == 'Z')
			putchar('A');
		else if (linea[cont] == 'z')
			putchar('a');
		else
			putchar('.');
	}
	putchar('\n');
}
