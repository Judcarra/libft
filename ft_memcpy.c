#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t count)
{
    const unsigned char *s = src;
    unsigned char *d = dest;

    if(!dest && !src)
    {
        return (0);
    }
    
    while(count--)
    {
        *d = *s;
        d++;
        s++;
    }
    return (dest);
}