#include "main.h"
/**
 * print_alphabet_x10 - code block
 * print_alphabet: display a-z
 * Return: 0;
 */
void print_alphabet_x10(void)
{
char c, i;
for (i = 0; i < 10; i++)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
}
