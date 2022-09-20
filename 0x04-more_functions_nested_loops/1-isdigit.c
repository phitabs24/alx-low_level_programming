#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: a character whose case is to be checked
 * Return: 1 if c is uppercase
 * or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}
	/*return (c >= 0 && c <= 9);*/
	return (0);
}
