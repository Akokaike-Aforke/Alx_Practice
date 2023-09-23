#include <stdio.h>
#include "main.h"
#include <string.h>

/*
 * _print_rev - prints string
 * @s - string reverse
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;
	int length;
	char *p;

	length = strlen(str);
	p = &(*(str + length));
	for (i = length; i >= 0; i--)
	{
		_putchar(*p);
		p--;
	}
	_putchar('\n');
}

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
