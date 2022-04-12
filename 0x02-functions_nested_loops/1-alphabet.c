#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * print_alphabet - prints the english alphabet from a-z.
 * Return: Nothing
 */
void print_alphabet(void);
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
