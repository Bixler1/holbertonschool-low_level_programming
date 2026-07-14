#include <stdio.h>
/*
 *main - Hello
 *
 */
/**
 * main - a Function that ...
 * Return: Description of the return value.
 */
int main(void)
{
	char az;

	az = 'a';

	while (az <= 'z')
	{
		if (az != 'q' && az != 'e')
		{
			putchar(az);
		}
		az++;
	}
	putchar('\n');
	return (0);
}

