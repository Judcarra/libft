#include <stdlib.h> //for calloc/malloc/realloc
#include "libft.h"
#include <stdio.h>
#include <stdint.h>
#include <string.h>

void    *ft_calloc(size_t num, size_t size)
{
    if(num == 0 || size == 0 || num > SIZE_MAX / size)
        return (NULL);

    size_t totalsize;
    void *ptr;

    totalsize = num * size;
    ptr = malloc(totalsize);

    if(ptr == NULL)
        return (NULL);

    memset(ptr, 0, totalsize);

    return (ptr);
}