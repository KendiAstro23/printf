#include <stdio.h>
#include "main.h"

/**
 * print_hex_extra - performs an operation
 *
 * @num: list of arguments
 *
 * Return: argument
 */
int print_hex_extra(unsigned long int num)
{
	long int n;
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

	for (n = 0; n < counter; n++)
	{
		array[n] = temp % 16;
		temp = temp / 16;
	}
	for (n = counter - 1; n >= 0; n--)
	{
		if (array[n] > 9)
			array[n] = array[n] + 39;
		_putchar(array[n] + '0');
	}
	free(array);
	return (counter);
}
