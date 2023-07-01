#include "main.h"
#include <stdlib.h>

/**
 * rot13 - Encodes a string using the ROT13 cipher.
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	char *ptr = s;
	char *result = s;

	while (*ptr != '\0')
	{
		if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M'))
		{
			*ptr += 13;
		}
		else if ((*ptr >= 'n' && *ptr <= 'z') || (*ptr >= 'N' && *ptr <= 'Z'))
		{
			*ptr -= 13;
		}

		ptr++;
	}

	return (result);
}
