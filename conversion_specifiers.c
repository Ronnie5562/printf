#include "main.h"
#include <stdarg.h>

/**
 * print_d - Print decimal numbers (base 10)
 * @ar_list:The listof the values of arguments
 *
 * Return: Count.
 */
int print_d(va_list ar_list)
{
	int num;
	unsigned int x, y, i, count = 0;

	num = va_arg(ar_list, int);

	if (num < 0)
	{
		x = (num * -1);
		count += _putchar(45);
	}
	else
	{
		x = num;
	}

	y = x;
	i = 1;
	while (y > 9)
	{
		y = y / 10;
		i *= 10;
	}

	while (i >= 1)
	{
		count += _putchar(((x / i) % 10) + '0');
		i = i / 10;
	}
	return (count);
}

/**
 * print_i - Prints integers.
 * @ar_list: Store list numbers.
 * Return: ar_list.
 */
int print_i(va_list ar_list)
{
	return (print_d(ar_list));
}
