#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints all numbers of base 16 in lowercase,
 * followed by a new line, using only putchar three times.
 * Return: Always 0 (Success)
 */
int main(void)
{
  int hex = 0;
  while(hex < 16)
    {
      if (hex < 10)
	{
	  putchar(hex + '0');
	}
      else
	{
	  putchar((hex - 10) + 'a');
	}
      num++;
    }
  putchar('\n');

  return (0);
}
