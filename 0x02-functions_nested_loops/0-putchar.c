#include <unistd.h>
/**
* main - a program that prints _putchar
*
* Return: 0 (success)
*/
int main(void)
{
char message[] = "_putchar\n";
int length = sizeof(message) - 1;
write(1, message, length);
return (0);
}

