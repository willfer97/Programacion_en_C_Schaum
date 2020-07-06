#include <stdio.h>

/* uso de indicadores con numeros enteros y en coma flotante */
int main()
{
	int i = 1234, j = 01777, k = 0xa08c;

	printf(":%8u %8o %8x:\n\n", i, j, k);
	printf(":%-8u %-8o %-8x:\n\n", i, j, k);
	printf(":%#8u %#8o %#8X:\n\n", i, j, k);
	printf(":%08u %08o %08X:\n\n", i, j, k);
}
