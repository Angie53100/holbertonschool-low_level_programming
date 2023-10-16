#include <stdlib.h>
#include <time.h>

/**
 *
 * main - Prints "Positive anything is better than negative nothing"
 *
 * Return: 0
 */
int main(void)
{	
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("if the number is greater than 0: is positive\n");
	printf("if the number is 0: is zero\n");
	printf("if the number is less than 0: is negative\n");

	retun (0);
}
