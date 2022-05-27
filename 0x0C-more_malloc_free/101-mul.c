#include <stdio.h>
#include <stdlib.h>

/**
 * digit_check - checks for non digit symbols
 * @str: pointer to string; number to process
 *
 * Return: int; 2 if all symballs are 0s,
 * 1 if all symbols are digits and
 * 0 if there is non digit symbols
 * TheOwl
 */
int digit_check(char *str)
{
	int i = 0, j = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) < '0' || *(str + i) > '9')
			return (0);
		if (*(str + i) == '0')
			j++;
		i++;
	}
	if (j == i)
		return (2);
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
		result = malloc((digit + zero + 1) * sizeof(char));
		if (result == NULL)
			return (NULL);
		result[digit + zero] = '\0';
		while (zero > 0)
		{
			result[digit + zero - 1] = '0';
			zero--;
		}
		result[0] = '0' + carry;
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

	/* base case */
	if (i < 0)
	{
		result = malloc((digit + 1) * sizeof(char));
		if (result == NULL)
			return (NULL);
		result[digit] = '\0';
		result[0] = '0' + carry;
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
	result = addition(num1, num2, result, i - 1, j - 1, digit, carry);
	result[i + 1] = '0' + dec;
	return (result);
}

/**
 * operation - multiply two given number
 * @num1: pointer to char; first number
 * @num2: pointer to char; second number
 * @sub_result: double pointer to char; result of sub operations
 *
 * Return: int; 1 if success 98 if failure
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
	i = lnum1 - 1;
	while (i >= 0)
	{
		sub_result[i] = multiplication(num1[i], num2, lnum1 - i - 1,
				lnum2 - 1, 0, 0, sub_result[i]);
		i--;
	}
	if (lnum1 == 1)
	{
		printf("%s\n", (sub_result[0]));
		return (1);
	}
	/* addition of partial multiplication and printing of result */
	i = 1;
	result = sub_result[0];
	while (i < lnum1)
	{
		if (result[0] == '0')
			result++;
		result = addition(result, sub_result[i], result,
				_strlen(result) - 1, _strlen(sub_result[i]) - 1, 0, 0);
		i++;
	}
	i = 0;
	while (result[i] == '0')
		i++;
	printf("%s\n", result + i);

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
		printf("Error\n");
		return (98);
	}
	if (digit_check(argv[1]) == 0 || digit_check(argv[2]) == 0)
	{
		printf("Error\n");
		return (98);
	}
	/* if onenumber is nil */
	if (digit_check(argv[1]) == 2 || digit_check(argv[2]) == 2)
	{
		printf("0\n");
		return (1);
	}
	/* malloc failure */
	sub_result = malloc((_strlen(argv[1]) + 1) * sizeof(char *));
	if (sub_result == NULL)
	{
		printf("Error\n");
		return (98);
	}

	return (operation(argv[1], argv[2], sub_result));
}
