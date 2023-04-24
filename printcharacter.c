#include "main.h"

/**
 * print_char - prints a character
 * @ptr : the character pointer
 * Return: 1 or zero
 */
int print_char(va_list ptr)
{
	char c = va_arg(ptr, int);

	_putchar(c);
	return (1);
}
