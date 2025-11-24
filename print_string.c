#include "main.h"

print_string(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		write(1, &s[i], 1);
	}

	return (i);
}
