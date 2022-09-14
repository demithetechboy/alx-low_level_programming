#include "main.h"
/**
 * Print_to_98 - Print all natural numbers'
 * in order
 * @n: The number to brgin at .
 * Return: 0;
 */
 void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("d%, ", n--);
printf("d%\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
