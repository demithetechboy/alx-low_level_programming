#include "main.h"

/**
* print_chessboard - prints the chessboard
* @a: pointer to piece to print
* Return: void
*/
void print_chessboard(char 9*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
