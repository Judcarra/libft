//does not remove significant whitespaces
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    if (!s1 || !set)
        return (NULL);
    size_t start; 
    size_t end; 
    start = 0;
    end = ft_strlen(s1);
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;
    size_t len;
    len = end - start;
    char *new_str;
    new_str = (char *)malloc(len + 1 * sizeof(char));
    if (!new_str)
        return (NULL);
    ft_strlcpy(new_str, s1 + start, len + 1);
    return (new_str);
}