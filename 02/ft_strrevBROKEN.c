// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);

#include <stdio.h>
 #include <stdlib.h>

int strsize(char *str)
{
	int i = 0;

	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char    *ft_strrev(char *str)
{
	int i;
	i = strsize(str) -1;
	char *new;
	new = malloc(strsize(str) + 1);

	if (!new)
		return (NULL);
	while (i)
	{
		*new = str[i];
		new++;
		i--;
	}
	return(new);
}

int main()
{
	char s[5] = "FUCK";
	// char n[5];
	printf("%s\n", ft_strrev(s));
}