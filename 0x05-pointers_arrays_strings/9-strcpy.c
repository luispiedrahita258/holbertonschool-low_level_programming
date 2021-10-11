#include "main.h"
#include <stdio.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 **/


char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}

dest[i++] = '\0';

return (dest);
}