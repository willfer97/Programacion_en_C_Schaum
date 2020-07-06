#include <stdio.h>

int main()
{
	int i, j, k;

	printf("%8o %8d %8x\n", i, j, k);
	printf("%-8o %-8d %-8x\n", i, j, k);
	printf("%#8o %08d %#8x\n", i, j, k);
}
