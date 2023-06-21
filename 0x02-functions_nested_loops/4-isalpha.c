#include <stdio.h>
#include "main.h"
/**
* _isalpha -  a function that checks for alphabetic characters.
 * @c: The character is alphabetic
 *
 * Return: 1 when c is a letter  and 0 on otherwise
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
return (0);
}
