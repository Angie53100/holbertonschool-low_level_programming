#include <stdio.h>

/**
 * main - "prints the size of various types on the computer it is compiled and run on."
 *
 * Return: 0
 */
int main(void)
{ printf("Size of a char: %zu Byte(s)\n", sizeof(char));
        printf("Size of an int: %zu Byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu Byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu Byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu Byte(s)\n",sizeof(float));

	return (0);
}
