#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * **strtow - split a string into words
 *
 * @str: string to be split
 *
 * Return: pointer to pointer to char or null on failure
 */

char **strtow(char *str)
{
	int i = 0, j = 0, k = 0, wcount = 0, len = 0, *wordlen, index = 0;
	char **arr;

	/* get word count and character count*/
	while (str[i] != '\0')
	{
		if (i >= 1 && str[i] == ' ' && str[i - 1] != ' ')
			wcount += 1;
		i++;
	}
	if (str[i - 1] != ' ')
		wcount++;

	wordlen = malloc(wcount * sizeof(int));

	if (wordlen == NULL)
		return (NULL);

	for (i = 0; i < (signed int)strlen(str); i++)
	{
		while (str[i] != ' ')
		{
			len++;
			i++;
		}

		wordlen[index] = len;
		index++;

		len = 0;
	}

/*	while (str[i] != '\0')
	{
		while (str[a] != ' ')
		{
			len++;
			a++;
		}
		if (str[a] == ' ')
			a++;
		wordlen[index] = len;
		index++;
		i++;
		len = 0;
		}*/

	/* allocate memory for rows */
	if (wcount > 0)
		arr = malloc(wcount * sizeof(char *));

	if (arr == NULL)
		return (NULL);

	/* allocate memory for cols*/
	if (wcount > 0)
	{
		for (i = 0; i < wcount; i++)
		{
			arr[i] = malloc(*(wordlen + i) * sizeof(char) + 1);

			if (arr[i] == NULL)
				return (NULL);
		}
	}

	for (i = 0; i < wcount; i++)
	{
		for (j = 0; j < wordlen[i]; j++)
		{
			if (str[k] != ' ')
				arr[i][j] = str[k];
			if (str[k] == ' ' && str[k + 1] != ' '  && k > 0)
				arr[i][j] = '\0';
			k++;
		}
	}

	for (i = 0; i < index; i++)
		printf("%d\n", wordlen[i]);

	return (arr);
}
