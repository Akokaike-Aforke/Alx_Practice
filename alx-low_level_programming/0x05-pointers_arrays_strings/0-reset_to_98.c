#include <stdio.h>
/**
 * reset_to_98 - updates int
 * n - pointer
 *
 * Return: void
 */
void reset_to_98(int *n)
{
	*n = 402;
}

int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
