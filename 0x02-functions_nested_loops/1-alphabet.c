#include "main.h"
/**
 * print_alphabet - prints the english alphabet from a-z.
 * Return: Always 0.
 */
int main (void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
