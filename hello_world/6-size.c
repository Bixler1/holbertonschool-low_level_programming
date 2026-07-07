#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
printf("Size of a char: %lu byte\n", sizeof(char));
printf("Size of an int: %lu bytes\n", sizeof(int));
printf("Size of a long int: %lu bytes\n", sizeof(long int));
printf("Size of a long long int: %lu bytes\n", sizeof(long long int));
printf("Size of a float: %lu bytes\n", sizeof(float));
printf("Size of a double: %lu bytes\n", sizeof(double));
printf("Size of a long double: %lu bytes\n", sizeof(long double));
return (0);
}
