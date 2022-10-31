// Assignment name  : ft_strcpy
// Expected files   : ft_strcpy.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcpy (man strcpy).

// Your function must be declared as follows:

// char    *ft_strcpy(char *s1, char *s2);

#include <stdlib.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	while (*s2)
		{
			*s1 = *s2;
			s1++;
			s2++;
		}
		*s1 = '\0';
		return (s2);
}

// int main()
// {
// 	char *s1 = malloc(sizeof(char) * 10);
//     char *s2 = malloc(sizeof(char) * 10);
// 	s2 = "hello";
// 	ft_strcpy(s1, s2);
//     printf("%s\n", s1);
//     return(0);
// }

int main(void)
{
	char str1[] = "hello";
	char str2[] = "goodbye";

	//printf("%s\n", str1);   // displaying what str1 is before ft_strcpy is used on it
	ft_strcpy(str1, str2);  // calling out functtion ft_strcpy on the strings
	printf("%s\n", str1);  // str1 should now become str2
	return (0);
}