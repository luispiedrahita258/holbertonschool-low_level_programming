#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 **/

void reverse_array(int *a, int n)
{
int *p, i, aux, k;

p = a;

for (i = 1; i < n; i++)
{
p++;
}

for (k = 0; k < i / 2; k++)
{
aux = a[k];
a[k] = *p;
*p = aux;
p--;
}
}

