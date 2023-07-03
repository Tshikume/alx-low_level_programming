#include <unistd.h>

void _putchar(char c);

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;

i = 0;
while (i < size)
{
if (i % 10)
{
_putchar(' ');
}
if (!(i % 10) && i)
{
_putchar('\n');
}
char hex[2];
hex[0] = (buffer[i] >> 4) & 0x0F;
hex[1] = buffer[i] & 0x0F;
hex[0] += hex[0] > 9 ? 'a' - 10 : '0';
hex[1] += hex[1] > 9 ? 'a' - 10 : '0';
_putchar('0');
_putchar('x');
_putchar(hex[0]);
_putchar(hex[1]);
i++;
}
_putchar('\n');
}

/**
 * _memset - fills the memory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte to fill the memory
 * @n: number of bytes to fill
 *
 * Return: Pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char buffer[98] = {0x00};

	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	simple_print_buffer(buffer, 98);

	return (0);
}
