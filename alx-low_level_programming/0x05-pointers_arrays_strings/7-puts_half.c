#include <stdio.h>
#include "main.h"
#include <string.h>

/*
 * puts_half - prints half of string
 * @str - string to be halved
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int length;
	int half_length;
	char *p;

	length = strlen(str);
	half_length = length / 2;
	p = &(*str);

	for (i = half_length; i < length; i++)
	{
		_putchar(*(p + half_length));
		p++;
	}
}

int main(void)
{
    char *str;

    str = "012345678";
    puts_half(str);
    return (0);
}
