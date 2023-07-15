#include<stdio.h>
/**
 *  main - entry point
 *  Return: Always 0 (success)
*/
int main(void)
{
int d;
d = 0;

while (d <= 9)
{
putchar(d + '0');
if (d != 9)
{
putchar(',');
putchar(' ');
}
d++;
}
putchar('\n');
return (0);
}

