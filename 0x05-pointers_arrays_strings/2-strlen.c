#include "main.h"

/**
 *int_strlen - returns the length of a string
 *@s - string to return lenghth of
 *Return: length
 */
int_strlen(char *s)
{
int length = 0;
while (*s !='\0')
{
length++;
s++;
}
return (length);
}
