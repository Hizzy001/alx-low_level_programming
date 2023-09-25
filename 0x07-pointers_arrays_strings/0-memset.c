#include "main.h"

/**
* _memset - main function to fills a memory with
* @b: The value used to copy
* @s: Function to be filled
* @n: Function parameters to copy
*
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
s[a] = b;
}

return (s);
}
