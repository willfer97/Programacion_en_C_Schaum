#include <stdio.h>

int main()
{
	char texto[80];

	scanf("%[^\n]", texto);
	printf("%s", texto);
}
