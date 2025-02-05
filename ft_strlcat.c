#include <stddef.h>
#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t destsize)
{
    size_t destlen;
    size_t srclen;
    int i;

    destlen = ft_strlen(dest);
    srclen = ft_strlen(src);
    i = 0;
    if (destsize <= destlen)
        return (srclen + destsize);
    while (src[i] && (destlen + i < destsize - 1))
    {
        dest[destlen + i] = src[i];
        i++;
    }
    dest[destlen + i] = '\0';
    return (destlen + srclen);
}