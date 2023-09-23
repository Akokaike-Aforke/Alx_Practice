#include <stdio.h>
#include "main.h"
#include <string.h>

/*
 * rev_string - prints string
 * @s - string reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int length;
	char *p;

	length = strlen(s);
	p = &(*(s + length));
	for (i = length; i >= 0; i--)
	{
		_putchar(*p);
		p--;
	}
	_putchar('\n');
}

int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
