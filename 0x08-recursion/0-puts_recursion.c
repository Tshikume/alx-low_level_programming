#include "main.h"

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: On success, returns the character written.
 * On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
return (putchar(c));
}

/**
 * _puts_recursion - Prints a string followed by a new line recursively.
 * @st: The string to be printed.
 */
void _puts_recursion(char *st)
{
if (*st == '\0')
{
_putchar('\n');
return;
}
_putchar(*st);
_puts_recursion(st + 1);
}
