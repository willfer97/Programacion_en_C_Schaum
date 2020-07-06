#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float x, y, z;

	printf("%12.4e %12.4e %12.4e\n", x, y, z);
	printf("%14.5e %14.5e\n", (x + y), (x - z));
	printf("%12.7e %15.7e\n", sqrt(x + y), fabs(x - z));
}
