#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A function that print if a number is positive, negative or zero
 * Return: Always (Success)
 */
int main(void)
{
int n;

for (n = '0'; n <= '9'; n++)
{
putchar(n);
if (n != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
