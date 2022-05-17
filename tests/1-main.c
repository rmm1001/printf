#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: always zer0
 */

int main(void)
{
	int len, len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	return (0);
}