#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/* print_char - print single character
 * @args: argument
 * return: 1
 */
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);
	write(1, &c, 1);
	return (1);
}
