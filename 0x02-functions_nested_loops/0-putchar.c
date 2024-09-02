#include "main.h"


/**
 * main - Entrypoint
 *
 * Description: "program that prints _putchar, followed by a new line"
 *
 * Return: Always (0).
 */

int main(void)
{
int i;
char a[] = "_putchar";
for (i=0; i<8; i++)
{
if (a[i] != '\0')
{
_putchar(a[i]);
}
else
{
break;
}
}
_putchar('\n');
return (0);
}
