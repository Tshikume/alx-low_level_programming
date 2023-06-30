#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
void main(void)
{
int a[5] = {98, 402, 198, 298, 402};
int *p;

p = &a[2];

*(p + 1) = 98;
write(1, "a[2] = ", 7);
char c = *(p + 1) + '0';
write(1, &c, 1);
write(1, "\n", 1);
}
