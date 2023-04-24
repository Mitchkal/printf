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


	va_start(ptr, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++; /*move to next*/

			if (is_conversion_specifier(*format))
			{
				count += handle_conversion_specifier(ptr, *format);
			}
			else
			{
				/*handle unknown*/
				_putchar('%');
				_putchar(*format);
				count += 2;
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
