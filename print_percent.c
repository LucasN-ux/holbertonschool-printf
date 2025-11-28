#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/* print_percent - print the single character %.
 * @args: argument
 * return: 1
 */
int print_percent(va_list args)
{
	(void)args;
	write(1, "%", 1);
	return (1);

}
