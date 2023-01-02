#include "main.h"

/**
 *  * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 * Return: nothing
*/

void print_chessboard(char (*a)[8])
{
int x, y;
for (x = 0; x < 8; x++)
{
for (y = 0; y < 8; y++)
{
if (y == 7)
{
_putchar(a[x][y]);
_putchar('\n');
}
else
_putchar(a[x][y]);
}
}
}
