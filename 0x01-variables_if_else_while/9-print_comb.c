#include <stdio.h>
#include <stdlib.h>
/**
 * main - code block
 * Description: display all posible single numers
 * Starting from 0 followed by new line
 * Return: 0
 */
int main(void)
{
int c = 0;
while (c < 10)
{
putchar(48 + c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
