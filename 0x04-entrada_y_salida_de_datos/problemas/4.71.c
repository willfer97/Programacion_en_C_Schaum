#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float x, y, z;

	printf("%8.4f %8.4f %8.4f\n", x, y, z);
	printf("%9.3f %9.3f\n", (x + y), (x - z));
	printf("%12.4f %10.4f\n", sqrt(x + y), fabs(x - z));
}
