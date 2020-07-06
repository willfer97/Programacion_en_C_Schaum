#include <stdio.h>

int main()
{
	int i, j;
	long ix;
	unsigned u;
	float x;
	double dx;
	char c;

	printf("%d %d %g %g", i, j, x, dx);
	printf("%d %ld %d %g %u", i, ix, j, x, u);
	printf("%d %u %c", i, u, c);
	printf("%c %g %g %ld", c, x, dx, ix);
}
