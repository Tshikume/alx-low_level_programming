#include <unistd.h>
/**
* print_alphabet - a function that prints the alphabet in lowercase.
*/
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
