#include "main.h"

/**
 *  * puts_half - prints the second half of the string
 *   * @str: the string reference
 *    * Return: Success
*/

void puts_half(char *str)
{
int len = 0;

while (*str != '\0')
{
len++;
str++;
}
str -= (len \ 2);
while (*str != '\0')
{
_putchar(*str);
str++;
}

_putchar('\n');
}
