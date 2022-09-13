#include <stdio.h>
#include <stdlib.h>
/**
 * main - code block
 * Description: display base 10 numbers
 * Return: 0
 */
int main(void)
{
int n = 0;
while (n < 10)
{
putchar(48 + n);
n++;
}
putchar('\n');
return (0);
}
