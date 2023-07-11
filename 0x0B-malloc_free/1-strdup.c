#include "main.h"
#include <stdio.h>	
#include <stdlib.h>
		
/**
 * _strdup - duplicate to new memory space location	
 * @str: char
 * Return: 0	
 */
		
char *_strdup(char *str)
		
{
		
	char *aaa;
	int i, r = 0;

	if (str == NULL)
		
		return (NULL);
		
	while (str[i] != '\0')
		
		i++;
		
	aaa = malloc(sizeof(char) * (i + 1));
		
	if (aaa == NULL)
		
		return (NULL);

	for (r = 0; r <= i; r++)
		aaa[r] = str[i];
			
	return (aaa);
		
}

