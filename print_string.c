#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/* print_string - print the string
 * @args: argument
 * return: 1
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (str == NULL)
		str = "(null)";

	while (str[len])
		len++;

	write(1, str, len);
	return(len);
}
