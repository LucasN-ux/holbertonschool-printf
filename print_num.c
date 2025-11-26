#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_number - prints an unsigned integer recursively using write
 * @num: the unsigned integer to print
 *
 * Return: the number of characters printed
 */
int print_number(unsigned int num)
{
	int count = 0;
	char c;

	if (num / 10)
	{
		count += print_number(num / 10);
	}
	c = (num % 10) + '0';
	write(1, &c, 1);
	count++;
	return count;
}

/**
 * print_int - prints a signed integer from a va_list using write
 * @args: va_list containing the integer to print
 *
 * Return: the number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	count += print_number(num);
	return count;
}
