#include <stdio.h>
#include "main.h"

/**
 * print_HEX_extra - function that used printf to
 * print extra hexgecimal numbers.
 * @num: The value to be printed
 *
 * Return: value
 */
int print_HEX_extra(unsigned int num)
{
	int a;
	int *array;
	int counter = 0;
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (a = 0; a < counter; a++)
	{
		array[a] = tem % 16;
		tem /= 16;
	}
	for (a = counter - 1; a >= 0; a--)
	{
		if (array[a] > 9)
			array[a] = array[a] + 7;
		_putchar(array[a] + '0');
	}
	free(array);
	return (counter);
}
