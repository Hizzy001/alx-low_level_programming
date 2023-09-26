#include "main.h"

/**
 * _strstr - Locates the first occurrence of a substring within a string.
 *
 * @haystack: The main string to search within.
 * @needle: The substring to search for.
 *
 * Return: If the substring is found, a pointer to the beginning
 *         of the located substring is returned. If the substring
 *         is not found, NULL is returned.
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *I = haystack;
char *P = needle;

while (*I == *P && *P != '\0')
{
I++;
P++;
}
if (*P == '\0')
return (haystack);
}
return ('\0');
}
