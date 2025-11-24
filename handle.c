#include "main.h"

int handle(char format, va_list args)
{
	if (format == 'c')
	{
		return (print_char(va_arg(args, int)));
	}

	if (format == 's')
	{
		return (print_string(va_arg(args, char *)));
	}
}
