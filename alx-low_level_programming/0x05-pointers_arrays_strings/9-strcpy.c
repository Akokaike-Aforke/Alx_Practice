#include <stdio.h>
#include "main.h"
#include <string.h>

/*
 * _strcp - prints half of string
 * @dest: buffer
 * @src: string to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	return strcpy(dest, src);
}

int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
	printf("%s", ptr);
    return (0);
}
