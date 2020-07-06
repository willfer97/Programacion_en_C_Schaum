#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float x, y, z;

	printf("%6e %6e %6e", x, y, z);
	printf("%8e %8e", (x + y), (x -z));
	printf("%12e %9e", sqrt(x + y), abs(x + z));
}
