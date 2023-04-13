#include <stdio.h>
#include <stdlib.h>

/**
 * mul - multiply supplied numbers
 *
 * @arr: array of integers to be multiplied
 *
 * Return: 0 on success;
 */

int mul(char *arr[])
{
	unsigned long int num1 = atoi(arr[1]);
	unsigned long int num2 = atoi(arr[2]);
	unsigned long int result;
	char display;

	result = num1 * num2;
	display = result;

	printf("%d\n", display);

	return (0);
}

/**
 * main - entry point; multiply positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc != 3)
	{
		printf("Error");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	mul(argv);

	return (0);
}
