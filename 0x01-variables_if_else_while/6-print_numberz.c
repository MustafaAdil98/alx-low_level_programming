#include<stdio.h>
#include<ctype.h>


/**
 * main - Entry point
 *
 * Description: "program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line."
 *
 * Return: Always (0).
 */

int main(void)
{
int i = 48;
while (i < 58)
{
putchar(i);
i += 1;
}
putchar('\n');
return (0);
}
