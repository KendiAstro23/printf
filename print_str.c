#include <stdio.h>
#include "main.h"

/**
 * _strlen - prints out the lenght of a string.
 * @s: string
 *
 * Return: string
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}

/**
 * _strlenc - prints out the length of
 * constant character strings
 * @s: string
 *
 * Return: string
 */

int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
