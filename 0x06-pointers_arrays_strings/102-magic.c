#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description:
 * This program demonstrates a coding challenge that involves manipulating
 * the value of a variable indirectly using pointer arithmetic.
 * It initializes
 * an integer variable `n`, an integer array `a`,
 * and a pointer `p` to an integer.
 * The challenge is to modify the value of an element
 * in memory using only the pointer `p`,
 * without directly accessing or modifying the array `a`.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/*
 * write your line of code here...
 * Remember:
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - you are not allowed to code anything else than this line of code
 */
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
