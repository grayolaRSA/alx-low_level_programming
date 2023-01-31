#include "lists.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
*_puts - prints strings
*@s: string input
*Return: integer output
*/

int _puts(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		count++;
	}
	return (count);
}

/**
 *print_int - prints integers
 *@n: integer
 *Return: number of characters
 */

int print_int(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}
	if (n / 10)
	{
		count += print_int(n / 10);
	}
	_putchar(n % 10 + '0');
	count++;
	return (count);
}

/**
*_printf - prints different types of string formats
*@format: string input to function
*Return: integer
*/

int _printf(const char *format, ...)
{
	int count, i = 0;
	char error_msg[] = "Unknown format specifier: %";
	va_list arg;

	va_start(arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				count += _putchar(va_arg(arg, int));
				break;

			case 's':
				count += _puts(va_arg(arg, char *));
				break;
			case '%':
				count += _putchar('%');
				break;
			case 'i':
			case 'd':
				count += print_int(va_arg(arg, int));
				break;
			default:
				_puts(error_msg);
				_putchar(format[i]);
			}
		}
		else
			_putchar(format[i]);
	}
	va_end(arg);
	return (count);
}

/**
 * list_len  - prints singly linked list
 *@h: list to be printed
 *Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			_printf("[%d]\n", h->len);
		} else
		{
			_printf("[0] (nil)\n");
		}
		h = h->next;
		count++;
	}
	return (count);
}
