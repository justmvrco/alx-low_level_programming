#include <stdio.h>
/**
 * main - Prints string
 * Description: Prints random specified string
 * Return: 0
 */
int main(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
