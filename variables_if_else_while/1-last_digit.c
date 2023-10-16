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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd n % 10 > 5);
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd n % 10);

	else if (lastd = n % 10 == 0);
		printf("Last digit of %d is %d and is 0\n", n, lastd n % 10);
		
	else (lastd = n % 10 < 6 && lastd  != 0);
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd n % 10);

	return (0);
}
