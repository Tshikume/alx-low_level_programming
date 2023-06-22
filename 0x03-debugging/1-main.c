#include <stdio.h>

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;

while (i < 10)
// putchar(i);
i++;  // Increment i to avoid infinite loop
}

printf("Infinite loop avoided! \\o/\n");

return 0;
}
