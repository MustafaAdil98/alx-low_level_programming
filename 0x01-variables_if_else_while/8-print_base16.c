#include<stdio.h>
#include<ctype.h>


/**
 * main - Entry point
 *
 * Description: "program that prints all the numbers of base 16 in lowercase,
 * followed by a new line."
 *
 * Returen: Always(0);
 */

int main(void)
{
int num ;
char letter = 'a';
for (num = 0; num < 9; num++)
{
putchar((num % 10) + '0');
}
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
