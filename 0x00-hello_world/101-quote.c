#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 0 for success and 1 for failure
 */
int main(void)
{
	char err[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, err, 59);
	return (1);
}
