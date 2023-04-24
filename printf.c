#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces output to a format
 * @format : the format
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list ptr; /* pointer to argument list*/
	int count = 0;
	print_func_t funcs[] = {
		{ 'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

	va_start(ptr, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			int i = 0;
			format++; /*move to next*/

			while (funcs[i].spec)
			{
				if (funcs[i].spec == *format)
				{
					count += funcs[i].print(ptr);
					break;

				}
				i++;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(ptr);
	return (count);
}
