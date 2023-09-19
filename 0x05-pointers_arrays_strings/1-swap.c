#include "main.h"
/*
 *
 * swap_int - Swaps the values of two integers
 *
 * This function takes two integer pointers, @a and @b, and swaps the values
 * they point to, effectively exchanging the values of the two integers
 *
 * @a: first parameter
 * @b: second parameter
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
