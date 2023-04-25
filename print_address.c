#include "main.h"
/**
* print_address - prints pointer addressi
* @ptr: pointer to the adress list
* Return: number of chars printed
*/
int print_address(va_list ptr)
{

	void *data = va_arg(ptr, void *);
	char hex_digits[] = "0123456789abcdef";
	char buffer[20];

	int i, j, len = 0;

	do {
		buffer[len++] = hex_digits[(unsigned long)data % 16];

		data = (void *)((unsigned long)data / 16);

	} while ((unsigned long)data != 0);

	i = _putchar('0');

	j = _putchar('x');

	if (i < 0 || j < 0)
	{
		return (-1);
	}

	for (i = len - i; i >= 0; i--)
	{

		j = _putchar(buffer[i]);

		if (j < 0)
		{
			return (-1);
		}

	}

	return (len + 2);
}
