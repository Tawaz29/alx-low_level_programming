#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name, followed by a new line
 *
 * Return: 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

