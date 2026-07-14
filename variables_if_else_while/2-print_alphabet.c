#include <stdio.h>
/**
 * Main - Entry point
 * Description: Prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
/**
 * main - a Function that ...
 * Return: Description of the return value.

*/
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter = letter + 1;
	}
	putchar('\n');
	return (0);
}

