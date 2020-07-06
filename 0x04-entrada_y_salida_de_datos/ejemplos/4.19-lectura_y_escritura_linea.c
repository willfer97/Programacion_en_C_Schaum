#include <stdio.h>

int main()
{
	char linea[80];

	scanf(" %[ ABCDEFGHIJKLMNOPQRSTUVWXYZ]", linea);
	printf("%s\n", linea);
}
