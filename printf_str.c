#include "main.h"

/**
 * _strlen - function that returns the lenght of string
 * @s:  char pointer
 * Return: i
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);

}

/**
 * _strlenc - Strlen function 
 * @s:  char pointer
 * Return: i
 */

int _strlenc(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}
