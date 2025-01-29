#include <stddef.h>

void    *ft_memchr(void *buf, int c, size_t count)
{
    unsigned char *bff = buf;
    size_t i = 0;
    
    while (bff[i] != '\0' && i < count)
    {
        if (bff[i] == c)
        {
            return (&bff[i]);
        }
        i++;
    }
    
    return (NULL);
}