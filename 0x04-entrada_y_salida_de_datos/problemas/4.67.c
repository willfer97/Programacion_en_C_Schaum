#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i, j, k;

	printf("%3d %3d %3d\n", i, j, k);
	printf("%5d %5d\n", (i + j), (i - k));
	printf("%9f %7d\n", sqrt(i + j), abs(i - k));
}
