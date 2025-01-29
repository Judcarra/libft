#include <stddef.h>

size_t  ft_strlcat(char *dest, const char *src, size_t destsize)
{
    size_t destlen;
    size_t srclen;

    destlen = 0;
    srclen = 0;
    while (dest[destlen] != '\0')
        destlen++;
    while (src[srclen] != '\0')
        srclen++;
    if (destsize < srclen + destlen){
        return (destlen + srclen);
    }
    size_t i = 0;
    while (i < srclen)
    {
        dest[destlen + i] = src[i];
        i++;
    }
    dest[destlen + i] = '\0';
    return (destlen + srclen);
}