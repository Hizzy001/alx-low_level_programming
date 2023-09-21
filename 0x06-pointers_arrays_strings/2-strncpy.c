#include "main.h"

/**
* _strncpy - Write a function that copies a string
* @src: The function parameter
* @dest: The function parameter
* @n: The function parameter
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)

{
int k = 0;

while (k < n && src[k] != '\0')
{
dest[k] = src[k];
k++;
}
while  (k < n)
{
dest[k] = '\0';
k++;
}
return (dest);
}
