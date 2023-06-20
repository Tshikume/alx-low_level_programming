#include <unistd.h>
/**
* print_alphabet - a function that prints the alphabet in lowercase. 
* return;
*/
void print_alphabet(void)
{
char message[] = "abcdefghijklmnoquvwxyz\n";
int length = sizeof(message) - 1;
write(1, message, length);
}
