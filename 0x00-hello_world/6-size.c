#include <stdio.h>

/**
 * main - Entry point
 * Description: using sizeof to print the size of various types
 * Return: Always 0 (Success)
*/
int main(void)
{
printf("Size of a char: %d byte(S)\n", sizeof(char));
printf("Size of an int: %d byte(S)\n", sizeof(int));
printf("Size of long int: %d byte(S)\n", sizeof(long int));
printf("Size of long long int : %d byte(S)\n", sizeof(long long int));
printf("Size of float: %d byte(S)\n", sizeof(float));
return (0);
}
