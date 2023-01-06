#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 *  * main - Program that takes interger arguments and return the sum
 *   * @argc: Number of command line arguments
 *    * @argv: Array name
 *Return: 1 if ERROR the number passed is not an interger, 0 if otherwise
*/
int main(int argc, char *argv[])
{
int a, b;
int c = 0;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
{
if (argv[a][b] < '0' || argv[a][b] > '9')
{
printf("Error\n")
return (1);
}
}
c += atoi(argv[a]);
}
printf("%d\n", c);
return (0);
}

