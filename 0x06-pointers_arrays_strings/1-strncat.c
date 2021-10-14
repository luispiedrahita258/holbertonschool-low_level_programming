#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 **/

char *_strncat(char *dest, char *src, int n)
{
int dlen = 0, j = 0;

while (dest[dlen])
{
dlen++;
}

while (j < n && src[j])
{
dest[dlen] = src[j];
dlen++;
j++;
}

dest[dlen + n + 1] = '\0';

return (dest);
}

