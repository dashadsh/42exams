// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strdup (man strdup).

// Your function must be declared as follows:

// char    *ft_strdup(char *src);

 #include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char *ft_strdup(char *src)
{
	char *new;
	int len;
	int i;

	i = 0;
	len = ft_strlen(src);
	new = malloc(len + 1);

	if (!new)
		return (NULL);
	while (i < len)
	{
		new[i] = src[i];
		i++;
	}
	return (new);
}
// char    *ft_strdup(char *src)
// {
// 	char *new;

// 	new = malloc(ft_strlen(src) + 1);
// 	if (!new)
// 		return (NULL);
// 	while (*src)
// 	{
// 		*new = *src;
// 		new++;
// 		src++;
// 	}
// 	return(new);
// }

#include <stdio.h>
int main()
{
	char *one = "hell";
	char *two = ft_strdup(one);
	// two = ft_strdup(one);
	// printf("%s\n", two);
	printf("%s\n", two);
}
