#include <stddef.h>

void    *ft_memmove(void *dest, const void *src, size_t count)
{
    unsigned char *d;
    const unsigned char *s;

    d = dest;
    s = src;
    if (!dest && !src)
        return (NULL);
    if (d < s)
    {
        while (count--)
            *d++ = *s++;
    }
    else
    {
        d = d + count;
        s = s + count;
        while (count--)
            *--d = *--s;
    }
    return (dest); 
}