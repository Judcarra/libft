#include <string.h>

void    ft_bzero(void *s, size_t count)
{
    unsigned char *ptr;
    ptr = s;
    
    while(count--)
    {
        *ptr = 0;
        ptr++;
    }
}
