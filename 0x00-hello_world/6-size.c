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
printf("Size of a char: %i byte(s)\n", sizeof(a));
printf("Size of an int: %i  byte(s)\n", sizeof(b));
printf("Size of a long int: %i byte(s)\n", sizeof(c));
printf("Size of a long long:%i byte(s)\n", sizeof(d));
printf("Size of a float %i  byte(s)\n", sizeof(f));
return (0);
}
