#include <stdio.h>
#include <string.h>

/**
 * _strlen - returns length of string
 * @s - string 
 *
 * Return: int
 */

int _strlen(char *s)
{
	return strlen(s);
}

int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
