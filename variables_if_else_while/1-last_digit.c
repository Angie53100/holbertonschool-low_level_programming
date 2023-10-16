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
		printf("Last digit of 98 is 8 and is greater than 5\n");
	else if (lastdigit == 0)
		printf("Last digit of 980 is 0 and is 0\n");
	else 
		printf("Last digit of -98 is -8 and is less than 6 and not 0\n");

	return (0);
}
