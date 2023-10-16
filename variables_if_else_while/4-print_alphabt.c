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
        if (letter != 'e' && letter != 'q')
		puthar(letter);
		putchar('\n');

		return (0);
}

