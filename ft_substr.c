#include <stddef.h>
#include "libft.h"
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    if (!s)
        return (NULL);

    size_t slen;

    slen = ft_strlen(s);

    if (start >= slen)
        return (ft_strdup(""));

    if (len > slen - start)
        len = slen - start;

    char *substr = (char *)malloc((len + 1)* sizeof(char));
    if (!substr)
        return (NULL);

    ft_strlcpy(substr, &s[start], len + 1);

    return (substr);
}