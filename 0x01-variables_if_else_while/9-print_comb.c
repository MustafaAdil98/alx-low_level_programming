#include<stdio.h>
#include<ctype.h>

/**
 * main - Entrypoint
 *
 * Descriptien: "program that prints all possible combinations of single-digit
 * numbers."
 *
 * Return: Always(0).
 */

int main(void)
{
int i = '0';
while (i <= '9')
{
putchar(i);
if (i != '9')
{
putchar(',');
putchar(' ');
}
++i;
}
putchar('\n');
return (0);
}
