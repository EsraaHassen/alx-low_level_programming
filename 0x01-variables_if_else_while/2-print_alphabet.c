#include <stdio.h>

/**
 * main - Entry point
 * Description: print alphabit
 * Return: 0 (success)
*/

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{	putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
