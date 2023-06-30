#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *str)
{
    char *encoded = malloc(strlen(str) + 1);
    if (encoded == NULL) {
        // Memory allocation failed
        return NULL;
    }

    const char *letters = "aeotl";
    const char *replacements = "43071";

    int i, j;
    for (i = 0; str[i] != '\0'; i++) {
        encoded[i] = str[i];
        for (j = 0; letters[j] != '\0'; j++) {
            if (str[i] == letters[j] || str[i] == letters[j] - 32) {
                encoded[i] = replacements[j];
                break;
            }
        }
    }
    encoded[i] = '\0';

    return encoded;
}

int main() {
    char *str = "Hello, World!";
    char *encoded = leet(str);

    // Output the encoded string to the console
    int i = 0;
    while (encoded[i] != '\0') {
        // Output the encoded character to the console
        putchar(encoded[i]);
        i++;
    }

    // Free the allocated memory
    free(encoded);

    return 0;
}
