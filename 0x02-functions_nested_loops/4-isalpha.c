#include "main.h"
/**
 * _isalpha - code block
 * @c: display a-z
 * Return: 0;
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
