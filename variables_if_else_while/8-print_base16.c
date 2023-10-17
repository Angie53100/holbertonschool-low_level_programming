#include <stdio.h>

/**
 *
 * main - Prints "prints all the numbers of base 16 in lowercase"
 *
 * Return: 0
 */
int main(void)
{ char letter;
	int n;

	for (n = '0'; n <= '9'; n++)
	{ putchar(n);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{ putchar(letter);
	}

	putchar('\n');

	return (0);
}

