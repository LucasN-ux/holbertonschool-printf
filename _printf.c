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
	int j;
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

			if (format[i] == '\0')
			{
				va_end(args);
				return(-1);
			}

			j = 0;

			while (str[j].type)
			{
				if (format[i] == str[j].type[0])
				{
					count += str[j].func(args);
					break;
				}
				j++;
			}
			if (str[j].type == NULL)
			{
				write(1, "%", 1);
				write(1, &format[i], 1);
				count += 2;
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
