#include "main.h"

int _printf(const char *format, ...)


{
	int i = 0;
	va_list args;

	check str[] = {
		{"c", print_char};
		{"s", print_string};
		{"%", print_chr};
	}

	if (!format)
	{
		return (-1);
	}

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
		}
	}
}