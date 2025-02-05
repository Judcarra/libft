#include <stddef.h>
#include "libft.h"
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t slen;

    slen = ft_strlen(s);
    if (start >= slen)
    {
        return (NULL);
    }

    if (len > slen)
    {
        len = slen - start;
    }

    char *substr = (char *)malloc(len * sizeof(char));

    ft_strlcpy(substr, &s[start], len + 1);

    return (substr);
}