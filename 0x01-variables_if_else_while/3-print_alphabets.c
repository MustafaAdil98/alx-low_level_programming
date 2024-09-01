#include<stdio.h>
#include<ctype.h>

/**
 * main - Entry point
 *
 * Description: "program that prints the alphabet in lowercase, and then in 
 * uppercase, followed by a new line."
 *
 * Return: Always return (0).
 */


int main(void)
{
int lowerCase = 'a' ,upperCase = 'A';
while (lowerCase <= 'z')
{
putchar(lowerCase);
lowerCase += 1;
}
while (upperCase <= 'Z')
{
putchar(upperCase);
upperCase += 1;
}
putchar('\n');
return (0);
}
