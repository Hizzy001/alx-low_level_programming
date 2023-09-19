#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 * @a: first parameter
 * @b: second parameter
* Return: void
*/

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
