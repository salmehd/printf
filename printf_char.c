#include "main.h"


/**
 * printf_char - function that prints a char
 * @val: arguments
 * Return: 1 at success
 */

int printf_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
