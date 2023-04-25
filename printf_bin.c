#include "main.h"

/**
 * printf_bin - function that prints a binary number.
 * @val: arguments.
 * Return: 1 at success
 */
int printf_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int x, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (x = 0; x < 32; x++)
	{
		p = ((a << (31 - x)) & num);
		if (p >> (31 - x))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - x);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
