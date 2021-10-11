#include "main.h"


/**
 * main - check the code for
 *
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
int index;

for (index = 0; index < n; index++)
{
printf("%d", a[index]);

if (index == n - 1)
continue;

printf(", ");
	}

printf("\n");
}
