#include <stdio.h>
#include <stdlib.h>

/**
 * digit_check - checks for non digit symbols
 * @str: pointer to string; number to process
 *
 * Return: int; 1 if all symbols are digits and 0 if not
 * TheOwl
 */
int digit_check(char *str)
{
	int i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < '0' || *(str + i) > '9')
		{
			printf("non digit symbol\n");
			return (0);
		}
		i++;
		printf("all digits are symbols\n");
	}
	return (1);
}

/**
 * _strlen - returns length of string or number of digits
 * @str: pointer to string; number to process
 *
 * Return: integer; number of digits
 */
int _strlen(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
		i++;

	return (i);
}

/**
 * multiplication - multiplies number by a digit
 * @n: char; digit for multiplication
 * @num2: pointer to char; number to multiply
 * @zero: int; number of zero to add at the end of sub_result
 * @i: int; index of num2
 * @digit: int; number of digit of the subresult
 * @carry: int; carry over of each calculation
 * @result: pointer to char; the result
 *
 * Return: pointer to char; holds the result of multiplication
 * TheOwl
 */
char *multiplication(char n, char *num2, int zero,
		int i, int digit, int carry, char *result)
{
	int k, dec;

	/* base case */
	if (i < 0)
	{
		printf("Number of zero is %d\n", zero);
		result = malloc((digit + zero + 1) * sizeof(char));
		if (result == NULL)
			return (NULL);
		result[digit + zero] = '\0';
		printf("result is like %s before zeros insert\n", result);
		while (zero > 0)
		{
			result[digit + zero - 1] = '0';
			zero--;
		}
		printf("result is like %s after zeros insert\n", result);
		result[0] = '0' + carry;
		printf("result is like %s insert of carry\n", result);
		printf("this is result[digit] %s after zeros insert\n", result + digit);
		printf("Last recursion of multiplication\n");
		return (result);
	}
	/* recursive instructions */
	k = (n - '0') * (num2[i] - '0') + carry;
	dec = k % 10;
	carry = k / 10;
	if (i == 0)
		digit = digit + 2;
	else
		digit++;
	result = multiplication(n, num2, zero, i - 1, digit, carry, result);
	result[i + 1] = '0' + dec;
	return (result);
}

/**
 * *addition - addition of 2 given numbers
 * @num1: pointer to char;first and longer number
 * @num2: pointer to char; second and shorter number
 * @result: pointer to char; result of addition
 * @i: int; index of num1
 * @j: int; index of num2
 * @digit: int; number of digit of result
 * @carry: int; carry over of each addition
 *
 * Return: pointer to char; result
 * TheOwl
 */
char *addition(char *num1, char *num2, char *result,
		int i, int j, int digit, int carry)
{
	int k, dec;

	printf("num1 index = %d and num2 index %d addition started\n", i, j);
	/* base case */
	if (i < 0)
	{
		result = malloc((digit + 1) * sizeof(char));
		if (result == NULL)
			return (NULL);
		result[digit] = '\0';
		result[0] = '0' + carry;
		printf("Last recursion of addition\n");
		return (result);
	}
	/* recursive instructions */
	if (j >= 0)
		k = (num1[i] - '0') + (num2[j] - '0') + carry;
	else
		k = (num1[i] - '0') + carry;	
	dec = k % 10;
	carry = k / 10;
	if (i == 0)
		digit = digit + 2;
	else
		digit++;
	printf("num1 index (%d) and num2 index (%d) addition completed, call of next recursion\n", i, j);
	result = addition(num1, num2, result, i - 1, j - 1, digit, carry);
	result[i + 1] = '0' + dec;
	return (result);
}

/**
 * operation - multiply two given number
 * @num1: pointer to char; first number
 * @num2: pointer to char; second number
 * @sub_result: double pointer to char; result of sub operations
 * @result: pointer to char; final result
 *
 * Return : int; 1 if success 98 if failure
 * TheOwl
 */
int operation(char *num1, char *num2, char **sub_result)
{
	char *result;
	int i = 0, lnum1 = _strlen(num1), lnum2 = _strlen(num2);

	/* partial multiplication by digits of first number */
	while (i < lnum1 + 1)
	{
		sub_result[i] = NULL;
		i++;
	}
	printf("Initialisation of sub_result\n");
	i = lnum1 - 1;
	while (i >= 0)
	{
		sub_result[i] = multiplication(num1[i], num2, lnum1 - i - 1,
				lnum2 - 1, 0, 0, sub_result[i]);
		printf("%s\n", sub_result[i]);
		i--;
	}
	printf("End of partial multiplication\n");
	if (lnum1 == 1)
	{
		printf("%s\n", (sub_result[0]));
		return (1);
	}
	/* addition of partial multiplication and printing of result */
	i = 1;
	result = sub_result[0];
	printf("lnum1 is not 0\n");
	while (i < lnum1)
	{
		printf("Addition of sub_result (%s) with result (%s) \n", sub_result[i], result);
		if (result[0] == '0')
			result++;
		result = addition(result, sub_result[i], result,
				_strlen(result) - 1, _strlen(sub_result[i]) - 1, 0, 0);
		i++;
		printf("%dth addition completed and result is %s\n", i - 1, result);
	}
	printf("End of addition\n");

	printf("%s\n", result);

	return (1);
}

/**
 * main - entry point
 * multiplies two positive number
 * @argc: unsigned integer; argument counter
 * @argv: pointer to array of string pointers; argument vector
 *
 * Return: 1 if success, 98 if not
 * TheOwl
 */
int main(int argc, char **argv)
{
	char **sub_result;
	
	/* exclusions */
	if (argc != 3)
	{
		printf("Error because of number\n");
		exit(98);
	}
	if (digit_check(argv[1]) != 1 || digit_check(argv[2]) != 1)
	{
		printf("Error because of non digit\n");
		exit(98);
	}
	sub_result = malloc((_strlen(argv[1]) + 1) * sizeof(char *));
	if (sub_result == NULL)
	{
		printf("Error on malloc\n");
		exit(98);
	}
	printf("start operation\n");
	return (operation(argv[1], argv[2], sub_result));
}
