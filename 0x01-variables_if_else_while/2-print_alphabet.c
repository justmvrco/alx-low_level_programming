#include <stdio.h>
/**
 * main - Prints string
 * Description: Prints random specified string
 * Return: 0
 */
int main(void)
{
  char i;

  for (i = 'a'; i <= 'z'; i++)
    {
      putchar(i);
    }
  putchar('\n');
  return (0);
}
