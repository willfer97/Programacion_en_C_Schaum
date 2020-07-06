#include <stdio.h>

/* visualizar un numero en coma flotante con varias precisiones
   diferentes */
int main()
{
	float x = 123.456;

	printf("%7f %7.3f %7.1f\n\n", x, x, x);
	printf("%12e %12.5e %12.3e\n", x, x, x);
}
