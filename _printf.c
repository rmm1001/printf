#include "main.h"

/**
 * arg_check - the backbone of the printf
 * @format: string with characters to check
 * @items: array with the characters to scan
 * @args: unspecified arguments
 *
 * Return: count of characters to be printed
 */

int arg_check(const char *format, string_h items[], va_list args)
{
	int i, j, k, char_num;

	char_num = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; items[j].c != NULL; j++)
			{
				if (format[i + 1] == items[j].c[0])
				{
					k = items[j].f(args);
					if (k == -1)
						return (-1);
					char_num += k;
					break;
				}
			}
			if (items[j].c == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					char_num += 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			char_num++;
		}
	}
	return (char_num);
}

/**
 * _printf - prints a formated string to stdout
 * @format: format of the input
 *
 * Return: total number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int char_num;

	string_h items[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_integers},
		{"d", print_integers},
		{NULL, NULL}
	};
	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);
	char_num = arg_check(format, items, args);
	va_end(args);
	return (char_num);
}
