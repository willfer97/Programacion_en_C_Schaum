#include <stdio.h>

/* visualizar un valor en coma flotante de dos formas diferentes */
int main()
{
	double x = 5000.0, y = 0.0025;

	printf("%f %f %f %f\n\n", x, y, x * y, x / y);
	printf("%e %e %e %e\n", x, y, x * y, x / y);
}
