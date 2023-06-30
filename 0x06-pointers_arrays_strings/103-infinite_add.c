#include <stdio.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result string
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int i = strlen(n1) - 1;
int j = strlen(n2) - 1;
int k = size_r - 1;

r[k] = '\0';  /* Null-terminate the result string */

while (i >= 0 || j >= 0 || carry > 0)
{
int digit1 = (i >= 0) ? n1[i--] - '0' : 0;
int digit2 = (j >= 0) ? n2[j--] - '0' : 0;

int sum = digit1 + digit2 + carry;
carry = sum / 10;
int digit = sum % 10;

if (k <= 0)
{
return (0);  /* Result doesn't fit in the buffer */
}

r[--k] = digit + '0';
}
return (&r[k]);  /* Return a pointer to the start of the result */
}
