#include "main.h"

/**
 * printf_hex_aux - function to prints an hexgecimal number.
 * @num: arguments
 * Return: counter
 */

int printf_hex_aux(unsigned long int num)
{
	long int x;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (x = 0; x < counter; x++)
	{
		array[x] = temp % 16;
		temp /= 16;
	}
	for (x = counter - 1; x >= 0; x--)
	{
		if (array[x] > 9)
			array[x] = array[x] + 39;
		_putchar(array[x] + '0');
	}
	free(array);
	return (counter);
}
