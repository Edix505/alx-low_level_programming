#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_alphabet - prints the english alphabet from a-z.
 */
void print_alphabet(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	       putchar(letter);

	       putchar('\n');
}
