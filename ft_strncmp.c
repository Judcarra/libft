#include <string.h>
#include <stddef.h>

int ft_strncmp(char *s1, char *s2, size_t n)
{
    size_t i;

    i = 0;
    while ( s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
    {
       i++;
       if(s1[i] != s2[i])
       {
        return (s1[i] - s2[i]);
       }
    }

    return (0);
}