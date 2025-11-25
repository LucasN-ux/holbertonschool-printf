#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

typedef struct specifier
{
	char *type;
	int (*func)(va_list);

} check;

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

int _printf(const char *format, ...);


#endif