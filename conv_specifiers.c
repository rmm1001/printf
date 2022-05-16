#include "main.h"

/**
 * print_char - prints character
 * @item: character to print
 *
 * Return: Always 0
 */

int print_char(va_list item)
{
	_putchar(va_arg(item, int));
	return (0);
}

/**
 * print_string - prints string
 * @item: string to print
 *
 * Return: string length
 */

int  print_string(va_list item)
{
	char *string;

	string = va_arg(item, char *);
	if (string == NULL)
	{
		string = "(null)";
	}
	_puts(string);
	return (_strlen(string));
}

/**
 * print_percent - prints the percent sign
 * @items: input argument to print
 *
 * Return: integer
 */

int print_percent(__attribute__((unused)) va_list items)
{
	_putchar('%');
	return (1);
}
