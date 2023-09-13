#include <stdio.h>

/**
 * main - prints the first 52 Fibonacci numbers
 * Return: 0.
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, fib1_half2;

	while (i < 50)
	{
	if (i == 0)
		printf("%ld", j);
	else if (i == 1)
		printf(", %ld", k);
	else
	{
		k += j;
		j = k - j;
		fib1_half2 = k % 10000000000;
		printf(", %ld", fib1_half2);
	}
	++i;
	}
	printf("\n");
	return (0);
}
