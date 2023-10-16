#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *
 * main - Prints "the last digit of the number"
 *
 * Return: 0
 */
int main(void)
{ 
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdigit > 5)
		printf("if the last digit of n is greater than 5: the string and is greater than 5\n");
	else if (lastdigit == 0)
		printf("if the last digit of n is 0: the string and is 0\n");
	else 
		printf("if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0\n");

	return (0);
}
