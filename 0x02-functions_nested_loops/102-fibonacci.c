#include "main.h"

/**
 * main - prints the first 52 Fibonacci numbers
 * Return: 0.
 */
int main(void)
{
	int i;
	long j = 0, k = 1, next;

	for (i = 0; i < 50; i++)
{
		if (i < 49)
		printf("%ld, ", j);
	else
		printf("%ld\n", j);

	next = j + k;
	j = k;
	k = next;
	}

	return (0);
}
