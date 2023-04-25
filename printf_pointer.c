#include "main.h"

/**
 * printf_pointer - function that prints hex
 * @val: arguments
 * Return: counter
 */

int printf_pointer(va_list val)
{
	void *j;
	char *s = "(nil)";
	long int x;
	int y;
	int i;

	j = va_arg(val, void*);
	if (j == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	x = (unsigned long int)j;
	_putchar('0');
	_putchar('x');
	y = printf_hex_aux(x);
	return (y + 2);
}
