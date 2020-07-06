#include <stdio.h>

/* especificacion de longitud de campo minina */
int main()
{
	int i = 12345;
	float x = 345.678;

	printf("%3d %5d %8d\n\n", i, i, i);
	printf("%3g %10g %13g\n\n", x, x, x);
	printf("%3g %13g %16g\n", x, x, x);
}
