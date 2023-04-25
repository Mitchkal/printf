#include "main.h"
/**
 * print_binary - converts input to binary
 * @ptr: pointer to the arguments
 * Return: an integer 1 or zero
 */
int print_binary(va_list ptr)
{
	int j;
	int count = 0;
	unsigned int n = va_arg(ptr, unsigned int);
	int binary[32];
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		binary[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
		count++;
	}
	return (count);
}

