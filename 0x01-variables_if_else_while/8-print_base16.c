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
char ch;

for (n = '0'; n <= '9'; n++)
putchar(n);

for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');

return (0);
}
