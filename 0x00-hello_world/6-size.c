#include <stdio.h>

/**
 * main - Entry point
 * Description: using sizeof to print the size of various types
 * Return: Always 0 (Success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %lu  byte(S)\n", sizeof(a));
printf("Size of an int: %lu byte(S)\n", sizeof(b));
printf("Size of a long int: %lu byte(S)\n", sizeof(c));
printf("Size of a long long int:%lu byte(S)\n", sizeof(d));
printf("Size of a float %lu byte(S)\n", sizeof(f));
return (0);
}
