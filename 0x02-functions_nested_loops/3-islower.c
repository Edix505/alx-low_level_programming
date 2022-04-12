#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
 * _islower - Short description, single line
 * @c: contains value to be compared
 * Return: Always 0.
 */
int _islower(int c)

{

if (c > 'a' && c < 'z')
{
return (1);
}

else
{
return (0);
}

}
