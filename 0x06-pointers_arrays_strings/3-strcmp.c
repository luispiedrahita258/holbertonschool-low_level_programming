#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 **/

int _strcmp(char *s1, char *s2)
{
int a = 0, b = 0, c = 0, r = 0, lim;

while (s1[a])
{
a++;
}

while (s2[b])
{
b++;
}

if (a <= b)
{
lim = a;
}
else
{
lim = b;
}

while (c <= lim)
{
if (s1[c] == s2[c])
{
c++;
continue;
}
else
{
r = s1[c] - s2[c];
break;
}

c++;
}

return (r);
}

