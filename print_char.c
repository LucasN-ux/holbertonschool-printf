#include "main.h"

/*print_char - imprime un caractère
 * @c: caractère à imprimer
 * return: 1
 */
print_char(char c)
{
    return (write(1, &c, 1));
}
