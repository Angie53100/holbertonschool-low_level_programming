#include <stdio.h>

/**
 *
 * main - Prints "prints all single digit numbers of base 10 starting from 0"
 *
 * Return: 0
 */
int main(void)
{ char num;


	for (num = '0'; num <= '10'; num++)
	{
		putchar(num);
	}

	        putchar('\n');

		return (0);
}

