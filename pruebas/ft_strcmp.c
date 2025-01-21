#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	
    }
	return (*s1 - *s2);
    
}

int main()
{
	char *str1 = "hola";
	char *str2 = "hola";
	int result = ft_strcmp(str1, str2);

	printf("%i", result);
	return (0);
}