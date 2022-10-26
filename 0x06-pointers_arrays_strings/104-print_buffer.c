#include "main.h"
#include <stdio.h>

/**
 *print_buffer - Prints a buffer 10 bytes at a time, starting with
 *  the byte position, then showing the hex content,
 *  then displaying printable charcaters.
 *  @b: The buffer to be printed.
 *  @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
int byte, index;
for (byte = 0; byte < size; byte += 10)
{
printf("%08x: ", byte);
for (index = 0; index < 10; index++)
{
if ((index + byte) >= size)
printf("  ");
else
printf("%02x", *(b + index + byte));
if ((index % 2) != 0 && index != 0)
printf(" ");
}
for (index = 0; index < 10; index++)
{
if ((index + byte) >= size)
break;
*If r cannot store the sum - 0. * add_strings - Adds the numbers stored in two strings.
*@n1: The string containing the first number to be added.
*@n2: The string containing the second number to be added.
*@r: The buffer to store the result.
* @r_index: The current index of the buffer.
*Return: If r can store the sum - a pointer to the result.
}/**
_strcmp - Compares pointers to two strings.
* @s1: A pointer to the first string to be compared.
count++; * @s2: A pointer to the second string to be compared.
}*
}* Return: If str1 < str2, the negative difference
 *If str1 == str2, 0.
 *If str1 > str2, the positive difference
*/
break;int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}

