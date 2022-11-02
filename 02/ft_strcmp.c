// Assignment name  : ft_strcmp
// Expected files   : ft_strcmp.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcmp (man strcmp).

// Your function must be declared as follows:

// int    ft_strcmp(char *s1, char *s2);

int    ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	//return((unsigned char)*s1 - (unsigned char)*s2); //should unsigned char be there???
	return(*s1 - *s2);
}
#include <stdio.h>
#include <string.h>
int main ()
{
	printf("test: ABCD, ABCD\t ft_strcmp: %d\n", ft_strcmp("ABCD", "ABCD"));
	printf("test: ABCD, ABCY\t ft_strcmp: %d\n", ft_strcmp("ABCD", "ABCY"));
	printf("test: ABCD, ABCA\t ft_strcmp: %d\n", ft_strcmp("ABCD", "ABCA"));
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main ()
// {
// 	printf("test: ABCD, ABCD\tstrcmp: %d\t, ft_strcmp: %d\n", 
// 	strcmp("ABCD", "ABCD"), ft_strcmp("ABCD", "ABCD"));
// 	printf("test: ABCD, ABCY\tstrcmp: %d\t, ft_strcmp: %d\n", 
// 	strcmp("ABCD", "ABCY"), ft_strcmp("ABCD", "ABCY"));
// 	printf("test: ABCD, ABCA\tstrcmp: %d\t, ft_strcmp: %d\n", 
// 	strcmp("ABCD", "ABCA"), ft_strcmp("ABCD", "ABCA"));
// 	return (0);
// }