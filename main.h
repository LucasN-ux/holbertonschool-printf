#ifndef MAIN_H
#define 

typedef struct specifier
{
	char *type;
	void (*func)(va_list);

} check;

int _printf(const char *format, ...);
int handle(char format, va_list args);
print_char(char c);
print_string(char *s);

#endif