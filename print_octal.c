#include "main.h"
/**
 * print_octal - print octal
 * @ptr : pointer to list
 * Return: number of printed characters
 */

int print_octal(va_list ptr)
{
	unsigned int num = va_arg(ptr, unsigned int);
	char octal[100];
	int i = 0, len = 0;

	/*conversion to octal*/
	do {
		octal[i++] = (num % 8) + '0';
		num /= 8;
	} while (num > 0);

	/*printing it in revers*/

	len = i;

	while (i--)
		_putchar(octal[i]);

	return (len);
}
