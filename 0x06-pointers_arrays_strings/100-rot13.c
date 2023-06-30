#include "main.h"
#include <unistd.h>

/**
 * rot13 - Encodes a string using ROT13 cipher
 * @str: The string to encode
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *str)
{
char *ptr = str;
int i, j;
char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (*ptr)
{
for (i = 0; alpha[i] != '\0'; i++)
{
if (*ptr == alpha[i])
{
char encoded_char = rot13[i];
write(1, &encoded_char, 1);
break;
}
}

if (alpha[i] == '\0')
{
write(1, ptr, 1);
}

ptr++;
}

return (str);
}
