#include "main.h"

/**
 * _strstr - Finds the first occurrence of a substring in a string.
 * @haystack: The string to search.
 * @needle: The substring to find.
 *
 * Return: A pointer to the beginning
 * of the found substring, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *p = needle;
while (*l == *p && *p != '\0')
{
l++;
p++;
}
if (*p == '\0')
return (haystack);
}
return (0);
}
