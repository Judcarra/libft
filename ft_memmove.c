#include <string.h>

void    *memmove(void *dest, const void *src, size_t count)
{
    unsigned char *d = dest;
    const unsigned char *s = src;

    if (d < s || d >= s + count)
    {
        while (count--)
        {
        *d = *s;
        d++;
        s++;
        }
    }
    else
    {
        d = d + count;
        s = s + count;
        while (count--)
        {
            d--;
            s--;
            *d = *s;
        }
    }
    return (dest); 
}