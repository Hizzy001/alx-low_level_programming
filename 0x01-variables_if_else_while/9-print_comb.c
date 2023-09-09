#include <stdio.h>

/**
* main - prints all possible num
*
* Return: always 0.
*/

int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);

}
