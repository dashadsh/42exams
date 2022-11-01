// Assignment name  : ft_atoi
// Expected files   : ft_atoi.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:
int ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int value = 0; //should be initialized!!!
	int sign = -1; //should be initialized!!!

	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}	
	while (*str >= '0' && *str <= '9')
	{
		value = (value * 10) + (int)*str - '0';
		str++;
	}
	return (value * sign);
}

#include <stdio.h>

int main(int ac, char **av)
{
	int nb = ft_atoi(av[1]);
	printf("%d", nb);
}