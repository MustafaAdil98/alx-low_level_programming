#include<stdio.h>
#include<ctype.h>


/**
 * main - Entrypoint
 *
 * Description: "program that prints all possible different combinations of two
 * digits"
 *
 *Return: Always (0).
 */

int main(void)
{
int i = '0', j = '1';
while (i <= '9')
{
while (j <= '9')
{
if (i != j)
{
putchar(i);
putchar(j);
putchar(',');
putchar(' ');
j += 1;
}
else
{
while (i <= j)
{
j += 1;
}
}
}
i += 1;
j = i;
}
return (0);
}
