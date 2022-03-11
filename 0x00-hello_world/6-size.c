#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the size of various types variables of C
 * Return: Always 0
 */
int main(void)
{
	char a;
	int b;
	long int  c;
	long long int d;
	float e = 454.45434;

	printf("Size of a char:", sizeof(char), " byte(s)\n");
	printf("Size of an int:", sizeof(int), " byte(s)\n");
	printf("Size of a long int:", sizeof(long int), "byte(s)\n");
	printf("Size of a long long int:", sizeof(long long int), "byte(s)\n");
	printf("Size of a float:", sizeof(e), "byte(s)\n");
	return (0);
}
