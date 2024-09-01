#include<stdio.h>
#include<ctype.h>


/**
 * main - Entrypoint
 *
 * Description: "program that prints the lowercase alphabet in reverse,
 * followed by a new line."
 *
 * Return: Always (0).
 */

int main(void)
{
int lowerCase = 122;
while (lowerCase > 96)
{
putchar(lowerCase);
lowerCase -= 1;
}
putchar('\n');
return (0);
}
