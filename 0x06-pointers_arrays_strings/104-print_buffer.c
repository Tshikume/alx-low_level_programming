#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer
 * @b: Buffer to print
 * @size: Number of bytes to print
 *
 * Description: Prints the content of size bytes of the buffer pointed by b
 * The output format follows specific rules specified in the prompt
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
/* Print hex values */
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				printf("%02x", b[j]);
if (j % 2 != 0)
					putchar(' ');
			}
			else
			{
				printf("  ");
				if (j % 2 != 0)
					putchar(' ');
			}
		}
		/* Print buffer content */
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
{
if (b[j] >= 32 && b[j] <= 126)
putchar(b[j]);
else
putchar('.');
}
else
{
putchar(' ');
}
}
putchar('\n');
}
}
