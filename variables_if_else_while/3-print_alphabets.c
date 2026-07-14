#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints lowercase alphabet, uppercase alphabet, and a newline.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase;
	char uppercase;
	
	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
<<<<<<< HEAD
		putchar(lowercase);
	}

=======
		putchar (lowercase);
	}
>>>>>>> 2f54db95d763d191048a66258fa735e058ed618f
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}

