#include "main.h"
/**
 * print_decimal - prints an integer decimal
 * @ptr : pointer to arguments
 * Return: characters printed
 */
int print_decimal(va_list ptr)
{
	int n = va_arg(ptr, int);
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num > 9)
	{
		count += print_decimal_recursion(num / 10);
	}
	_putchar(num % 10 + '0');
	count++;

	return (count);
}

/**
 * print_decimal_recursion - recursively print a decimal number
 * @n : the number
 * Return:number of characters printed
 */
int print_decimal_recursion(unsigned int n)
{
	int count = 0;

	if (n > 9)
	{
		count += print_decimal_recursion(n / 10);
	}
	_putchar(n % 10 + '0');
	count++;

	return (count);
}
