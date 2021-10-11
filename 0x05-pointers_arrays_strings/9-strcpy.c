#include "main.h"
#include <stdio.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */


char *_strcpy(char *dest, const char *src)
{
int index = 0;

while (src[index])
{
dest[index] = src[index];
index++;
}

return (dest);
}