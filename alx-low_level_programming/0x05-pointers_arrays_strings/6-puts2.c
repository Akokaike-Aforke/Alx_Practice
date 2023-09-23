#include <stdio.h>
#include "main.h"
#include <string.h>

/*
 * puts2 - prints string
 * @str - string reverse
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int length;
	char *p;

	length = strlen(str);
	p = &(*str);

	for (i = 0; i < length; i++)
	{
		_putchar(*p);
		p+=2;
	}
}

int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
