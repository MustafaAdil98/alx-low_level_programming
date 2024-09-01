#include<stdio.h>
#include<ctype.h>


/**
 * main - Entry point
 *
 *Description: "program that prints all the numbers of base 16 in lowercase,
 * followed by a new line."
 *
 * Returen: Always(0);
 */

int main(void)
{
int num = 48;
while (num > 71)
{
if (num < 57 || num > 64)
{
putchar(num);
num += 1;
}
else
{
num += 1;
}
}
putchar('\n');
return (0);
}
