#include<stdio.h>
#include<ctype.h>


/**
 * main - Entry point
 *
 * Dscription: program that prints the alphabet in lowercase, followed by a new
 * line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int lowerCase = 'a';
	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase += 1;
	
	}
	putchar('\n');
	return (0);

}

