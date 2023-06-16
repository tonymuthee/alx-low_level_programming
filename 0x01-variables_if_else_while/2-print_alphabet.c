#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
