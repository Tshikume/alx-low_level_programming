#include <stdio.h>
/**
* _islower -  a function that checks for lowercase character.
 * @c: The character to lower
 *
 * Return: 1 when c is lowercase nd 0 on uppercas
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);
}
