#include <stdio.h>
#include "main.h"
#include <string.h>

/*
 * print_array - prints half of string
 * @a: pointer
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if ( i == (n - 1))
			printf("%d", *a);
		else
		printf("%d, ", *a);
		a++;
	}
}

int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 3);
    return (0);
}
