#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - main block
* Description: printing out the last random number stored in n variable
* Return: 0
*/
int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
printf("last digit of %d is %d and is greater than 5\n", n, last);
else if (n < 6)
printf("last digit of %d is %d and is less than 6 and not 0\n", n, last);
else
printf("last digit of %d is %d and is 0\n", n, last);
	return (0);
}
