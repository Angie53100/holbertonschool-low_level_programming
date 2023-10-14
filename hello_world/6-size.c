#include <stdio.h>

/**
 * main - "prints the size of various types on the computer it is compiled and run on."
 *
 * Return: 0
 */
int main(void)
{ printf("Size of a char: %zu Byte(s)\n", sizeof(char));
	("Size of an int: %zu Byte(s)\n", sizeof(int));
	("Size of a long int: %zu Byte(s)\n", sizeof(long int));
	("Size of a long long int: %zu Byte(s)\n", sizeof(long long int));
	("Size of a float: %zu Byte(s)\n",sizeof(float));

	return (0);
}
