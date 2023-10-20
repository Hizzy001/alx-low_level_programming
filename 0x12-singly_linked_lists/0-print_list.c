#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all of  the elements that is with a linked list
 * @h: a pointer to the list_t of the list to print
 *
 * Return: the number of nodesto be included in the  printed
 */
size_t print_list(const list_t *h)
{
size_t s = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
s++;
}

return (s);
}
