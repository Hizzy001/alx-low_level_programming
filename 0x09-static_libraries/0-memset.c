#include "main.h"

/**
 * _memset - fill the block of memory with a value
 * @s: memory to be filled
 * @b: the desired value of the block
 * @n: the number of bytee
 *
 * Return: changed array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
return (s);
}
