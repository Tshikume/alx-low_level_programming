#include "main.h"
/*
 * swap_int - a function that swaps the values of two integers
 * pointed by a and b
 */
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
