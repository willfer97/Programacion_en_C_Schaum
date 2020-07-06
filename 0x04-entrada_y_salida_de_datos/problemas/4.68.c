#include <stdio.h>

int main()
{
	float x, y, z;

	printf("%f %f %f", x, y, z);
	printf("%f %f", (x + y), (x - z));
	printf("%f %f", sqrt(x + y), fabs(x - z));
}
