#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string
 * @src: char string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;

for (i = 0; dest[i] != '\0'; i++)
;

for (j = 0; src[c] != '\0'; c++)
{
dest[i] = src[j];
i++;
}

dest[i] = '\0';
return (dest);
}
