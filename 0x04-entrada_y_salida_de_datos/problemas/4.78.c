#include <stdio.h>
int main()
{
	int i = 12345, j = -13579, k = -24680;
	long ix = 123456789;
	short sx = -2222;
	unsigned ux = 5555;

	printf("%d %d %d %ld %d %u\n\n\n", i, j, k, ix, sx, ux);
	printf("%3d %3d %3d\n\n%3ld %3d %3u\n\n\n", i, j, k, ix, sx, ux);
	printf("%8d %8d %8d\n\n%15ld %8d %8u\n\n\n", i, j, k, ix, sx, ux);
	printf("%-8d %-8d\n%-8d %-15ld\n%-8d %-8u\n\n\n", i, j, k, ix, sx, ux);
	printf("%+8d %+8d\n%+8d %+15ld\n%+8d %8u\n\n\n", i, j, k, ix, sx, ux);
	printf("%08d %08d\n%08d %015ld\n%08d %08u\n\n\n", i, j, k, ix, sx, ux);
}
