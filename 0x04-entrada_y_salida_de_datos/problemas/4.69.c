#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float x, y, z;

	printf("%6f %6f %6f", x, y, z);
	printf("%8f %8f", (x + y), (x -z));
	printf("%12f %9f", sqrt(x + y), abs(x + z));
}
