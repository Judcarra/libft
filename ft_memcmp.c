#include <string.h>
#include <stddef.h>
#include <stdio.h>

int    ft_memcmp(void *buf1, void *buf2, size_t count)
{
    unsigned char *bff1 = buf1;
    unsigned char *bff2 = buf2;
    size_t i = 0;

    while (i < count)
    {
        if (bff1[i] != bff2[i])
        {
            return (bff1[i] - bff2[i]);
        }
        i++;
    }
    return (0);
}