#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/* _printf - print arguments and string.
 * @format: pointer to the first argument
 * return: count
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	int j = 0;
	va_list args;

	check str[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}

	};

	if (!format)
	{
		return (-1);
	}

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			while (str[j].type)
			{
				if (format[i] == str[j].type[0])
				{
					count += str[j].func(args);
					break;
				}
				j++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
