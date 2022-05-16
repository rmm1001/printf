#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/*Functions for writing strings and characters*/
int _putchar(char c);
void _puts(char *string);
int _strlen(char *string);

/*Converter specifiers*/
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);

/**
 * struct handle - structure
 */

typedef struct str_char_handler
{
	char *c;
	int (*f)(va_list);
} string_h;

/* The printf() function*/
int _printf(const char *format, ...);


#endif
