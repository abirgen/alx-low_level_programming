#include "main.h"

/*
 * Task: 3. I do not fear computers. I fear the lack of them
 
 */

/**
 * * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
