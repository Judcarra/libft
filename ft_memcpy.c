#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t count)
{
    const unsigned char *s = src;
    unsigned char *d = dest;

    while(count--)
    {
        *d = *s;
        d++;
        s++;
    }
    return (dest);
}