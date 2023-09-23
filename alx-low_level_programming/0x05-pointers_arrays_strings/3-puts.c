#include <stdio.h>
#include "main.h"
#include <string.h>

/*
 * _puts - prints string
 * @str - string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;
	int length;
	
	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		_putchar(*str);
		str++;
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
