#include "main.h"

/**
 * numbers- prints number
 * @n: input iteger argument
 * Return: int
 */

int numbers(va_list n)
{
	int i, j, length;
	unsigned int num;

	i = va_arg(n, int);
	j = 1;
	length = 0;
	if (i < 0)
	{
		length += _putchar('-');
		num = i * (-1);
	}
	else
		num = i;
	for (; num / j > 9; )
		j *= 10;
	for (; j != 0; )
	{
		length = _putchar('0' + num / j);
		num %= j;
		j /= 10;
	}
	return (length);
}


/**
 * print_integers - print integers
 * @item: input integer to print
 * Return: int
 */

int print_integers(va_list item)
{
	return (numbers(item));
}
