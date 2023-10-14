#include <stdio.h>

/**
 * main - "prints the size of various types on the computer it is compiled and run on."
 *
 * Return: 0
 */
int main(void)
{ printf("Size of a char: 1 Byte(s)\n", sizeof(char));
        printf("Size of an int: 4 Byte(s)\n", sizeof(int));
	printf("Size of a long int: 4 Byte(s)\n", sizeof(long int));
	printf("Size of a long long int: 8 Byte(s)\n", sizeof(long long int));
	printf("Size of a float: 4 Byte(s)\n",sizeof(float));

	return (0);
}
