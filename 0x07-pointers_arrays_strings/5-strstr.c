#include "main.h"

/**
  *_strstr – a function that locates a substring.
  * @needle: the substring to be located
  * @haystack: the string to be searched
  *
  * Return: if the substring is located - a pointer to the beginning
  *
  * if the substring is not located - NULL.
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
return (NULL);
}
