#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: string 1
 * @src: string 2
 * @n: number of elements for concatenation
 * Return: pointer to resulting dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

for (i = 0; dest[i] != '\0'; i++)
	;

for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
{
dest[i] = src[j];
}
return (dest);
}
