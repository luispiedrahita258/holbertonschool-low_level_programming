#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 **/

char *_strcat(char *dest, char *src)
{
int dlen = 0, i;

while (dest[dlen])
{
dlen++;
}

for (i = 0; src[i] != 0; i++)
{
dest[dlen] = src[i];
dlen++;
}

dest[dlen] = '\0';
return (dest);
}

