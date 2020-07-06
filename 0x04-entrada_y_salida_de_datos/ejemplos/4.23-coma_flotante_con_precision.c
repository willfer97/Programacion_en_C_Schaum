#include <stdio.h>

/* visualizar un numero en coma flotante con varias precisiones
   diferentes */
int main()
{
	float x = 123.456;

	printf("%f %.3f %.1f\n\n", x, x, x);
	printf("%e %.5e %.3e\n", x, x, x);
}
