#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard.
 * @a: The chessboard array.
 *
 * Return: void
 */
void print_chessboard(char (*a)[8]);

/**
 * main - Entry point of the program.
 *
 * Return: 0 on success.
 */
int main(void)
{
char board[8][8] = {
{'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
{'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
};
print_chessboard(board);
return (0);
}

/**
 * print_chessboard - Prints the chessboard.
 * @a: The chessboard array.
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int row, col;
for (row = 0; row < 8; row++)
{
for (col = 0; col < 8; col++)
{
putchar(a[row][col]);
}
putchar('\n');
}
}
