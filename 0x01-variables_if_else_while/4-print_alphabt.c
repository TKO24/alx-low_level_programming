#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A function that print if a number is positive, negative or zero
 * Return: Always (Success)
 */
int main(void)
{
char ch;

while (ch <= 'z')
{
	if (ch != 'q' && ch != 'e')
	{
		putchar(ch);
	}
	ch++;
}
putchar('\n');
return (0);
}
