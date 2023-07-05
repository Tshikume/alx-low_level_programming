#include "main.h"

/**
 *_puts_recursion - Prints a string followed by a new line.
 *@st: The string to be printed.
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
