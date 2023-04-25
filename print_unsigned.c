#include "main.h"
/**
 * print_unsign - prints an unsigned integer
 * @n : passed unsigned parameter
 * Return: 0 or 1
 */
int print_unsign(unsigned int n)
{
	if (n / 10)
		return (print_unsign(n / 10) + _putchar(n % 10 + '0'));
	return (_putchar(n % 10 + '0'));
}
/**
 * print_unsigned - write unsigned int
 * @ptr : ponter to va_list
 * Return: numbers printed
 */
int print_unsigned(va_list ptr)
{
	unsigned int n = va_arg(ptr, unsigned int);

	return (print_unsign(n));
}
/**
 * print_hex - convert intto hex
 * @ptr : points to list
 * Return: number of times printed
 */

int print_hex(va_list ptr)
{
	unsigned int num = va_arg(ptr, unsigned int);
	char hex_digits[] = "0123456789abcdef";
	char buffer[100];
	int i, j;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	i = 0;

	while (num > 0)
	{
		buffer[i] = hex_digits[num % 16];
		num /= 16;
		i++;
	}

	buffer[i] = '0';
	/*reversing string*/
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
	}
	return (i);
}
/**
* print_hex_upper - prints int as hex upper
* @ptr: pointer to list with ints
* Return: number of characters
*/
int print_hex_upper(va_list ptr)
{
	unsigned int num = va_arg(ptr, unsigned int);
	char hex[100];
	int i = 0, len = 0;
	/*conversion*/
	do {
		int digit = num % 16;

		if (digit < 10)
			hex[i++] = digit + '0';
		else
			hex[i++] = digit - 10 + 'A';

		num /= 16;
	} while (num > 0);
	/* print hex in reverse*/
	len = i;

	while (i--)
		_putchar(hex[i]);
	return (len);
}
