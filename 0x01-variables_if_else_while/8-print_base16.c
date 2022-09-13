#include <stdio.h>
#include <stdlib.h>
/**
 * main - code block
 * Description: display base 16 numbers lowercase
 * Return: 0
 */
int main(void)
{
char d = '0';
while (d <= '9')
{
putchar(d);
d++;
}
char c = 'a';
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
