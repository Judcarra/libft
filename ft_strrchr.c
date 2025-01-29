#include <stddef.h>

char    *ft_strrchr(char *str, int c)
{
    size_t strsize;

    strsize = 0;
    while (str[strsize] != '\0')
        strsize++;
    if (c == '\0')
        return (&str[strsize]);

    int i;

    i = strsize - 1;
    while (i >= 0)
    {
        if (str[i] == (char)c)            
            return (&str[i]);
        i--;   
    }
    return (NULL);
}