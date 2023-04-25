#include "main.h"

/**
 * printf_int - function that prints integer
 * @args: argument to print
 * Return: number of characters printed
 */


int printf_int(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int  z = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		z++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			z++;
		}
	}
	_putchar(last + '0');

	return (z);
}

/**
 * printf_dec - function that prints decimal point
 * @args: argument to print
 * Return: number of characters printed
 */


int printf_dec(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int  z = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		z++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			z++;
		}
	}
	_putchar(last + '0');

	return (z);
}
