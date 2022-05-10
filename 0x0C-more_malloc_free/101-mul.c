#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdio.h>

/**
 * _strlen - finds length of a string
 * @s: string
 * 
 * Return: length
 */

int _strlen(char *s)
{
	unsigned int i, n = 0;
	
	for (i = 0; s[i] != '\0'; i++)
		n++;
	return (n);
}

/**
 * populateResult - multiplies two numbers in string
 * @dest: product of s1 and s2 
 * @s1: first number in string format
 * @s2: second number in string format
 * @len_s1: length of s1
 * @len_s2 : length of s2
 * 
 * Return: None
 */

void populateResult(char *dest, char *s1, char *s2, int len_s1, int len_s2)
{
	int i, j, k, temp, non_carry_value;
	int carry_value = 0;
	char *multip;
	char *multiplier;
	
	if (len_s1 > len_s2)
	{
		i = len_s1 - 1;
		j = len_s2 - 1;
		multip = s1;
		multiplier = s2;
	}
	else
	{
		i = len_s2 - 1;
		j = len_s1 - 1;
		multip = s2;
		multiplier = s1;
	}
	
	while (i >= 0)
	{
		k = i;
		
		while (k >= 0)
		{
			temp = ((nultip[k] - '0') * (multiplier[j] - '0'));
			temp += carry_value;
			if (j + 1 <= len_s2 - 1 && dest[k + j + 1] >= '0' && dest[k + j + 1] <= '9')
				temp += dest[k + j + 1] - '0';
			if (temp < 10)
			{
				non_carry_value = temp;
				carry_value = 0;
			}
			else
			{
				non_carry_value = temp % 10;
				carry_value = temp / 10;
			}
			dest[k + j + 1] = non_carry_value + '0';
			k--;
		}
		if (carry_value)
			dest[k + j + 1] = carry_value + '0';
		
		carry_value = 0;
		
		if (j > 0)
			j--;
		else
			i = -1;
	}
	free(dest);
	free(multip);
	free(multiplier);
}

/**
 * print_result - prints numbers
 * @s: number in string format 
 * @n: length of s
 * 
 * Return: None
 */

void print_result(char *s, int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			printf("%c", s[i]);
	}
}

/**
 * main - Entry point
 * @argc: number of command line arguments 
 * @argv: the arguments
 * 
 * Return: 0 if success 
 */

int main(int argc, char *argv[])
{
	int len1, len2;
	char *result;
	
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	
	len1 = _strlen(argv[1]);
	if (!len1)
	{
		printf("Error\n");
		exit(98);
	}
	
	len2 = _strlen(argv[2]);
	if (!len2)
	{
		printf("Error\n");
		exit(98);
	}
	
	result = malloc(len1 + len2);
	if (result == NULL)
		return (1);
	populateResult(result, argv[1], argv[2], len1, len2);
	print_result(result, len1 + len2);
	printf("\n");
	free(result);
	
	return (0);
}
