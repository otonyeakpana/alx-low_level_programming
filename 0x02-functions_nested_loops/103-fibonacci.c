#include <stdio.h>

/**
 *main - Prints the add of the Fibonacci numbers
 *Return: Always 0.
 */
int main(void)
{
int c;
long int n1, n2, fn;
n1 = 1;
n2 = 2;
fn = fn = 0;
while (fn <= 4000000)
{
fn = n1 + n2;
n1 = n2;
n2 = fn;
if ((n1 % 2) == 0)
{
fn += n1;
}
}
printf("%ld\n", fn);
return (0);
}
