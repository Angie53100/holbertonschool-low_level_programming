#include <stdio.h>

/**
 *
 * main - "alphabet except q and e"
 *
 * Return: 0
 */
int main(void)
{ char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
       for (letter != 'e' && letter != 'q')
		putchar('\n');

		return (0);
}

