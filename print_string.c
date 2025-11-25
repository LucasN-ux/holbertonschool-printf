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

	if (str == NULL)
		str = "";
	write(1, str, 1);
	return(1);
}
