#include <stdio.h>
#include <stdlib.h>
/**
 * main - code block
 * Description: display alphabet lowercase in reverse
 * Return: 0
 */
int main(void)
{
char c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
