#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char leetMap[5][2] = {
		{'a', '4'},
		{'e', '3'},
		{'o', '0'},
		{'t', '7'},
		{'l', '1'}
	};

	while (*ptr)
	{
		int i;

		for (i = 0; i < 5; i++)
		{
			if (*ptr == leetMap[i][0] || *ptr == leetMap[i][0] - 'a' + 'A')
			{
				*ptr = leetMap[i][1];
				break;
			}
		}

		ptr++;
	}

	return (str);
}
