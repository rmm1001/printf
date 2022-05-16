#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character to stdout
 * @c: input character
 * Return: If successful 1, -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints string to stdout
 * @string: string to write on std
 *
 * Return: string
 */

void _puts(char *string)
{
	int count;

	for (count = 0; string[count] != '\0'; count++)
	{
		_putchar(string[count]);
	}
}

/**
 * _strlen - outputs the length of a string
 * @string: string input
 *
 * Return: length of the string
 */

int _strlen(char *string)
{
	int len;

	for (len = 0; string[len] != '\0'; len++)
		;
	return (len);
}
