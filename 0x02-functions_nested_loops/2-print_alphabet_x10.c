#include "main.h"
/**
 
 *main - print_alphabet x10
 *Return: On success 1.
*/
void print_alphabet_x10(void)
{
char i, k;

for (k = 0; k < 10; k++)
{

for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
