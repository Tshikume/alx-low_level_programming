#include <unistd.h>

int main() {
    char message[] = "_putchar\n";
    int length = sizeof(message) - 1;

    write(1, message, length);
    return 0;
}

