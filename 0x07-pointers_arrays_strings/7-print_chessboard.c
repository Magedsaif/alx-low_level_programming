#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard.
 * @a: a 2 dimensional array to be printed as a chessboard.
 * Return : no
*/

void print_chessboard(char (*a)[8])
{
int k;
int l;
for (k = 0; k < 8; k++)
{
for (l = 0; l < 8; l++)
{
_putchar(a[k][l]);
}
_putchar('\n');
}
}
