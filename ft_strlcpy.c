//copia y concatena strings. 
//The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result. 
//strlcpy take the full size of the buffer (not just the length) and guarantee to NUL-terminate the result (as long as size is larger than 0
//devuelve el tamaño total del string que se ha intentado crear
#include <stddef.h>

size_t  ft_strlcpy(char *dest, const char *src, size_t destsize)
{
    size_t i;
    
    i = 0;
    if (destsize == 0)
    {
        while (src[i] != '\0')
            i++;
        return (i);
    }
    while (i < destsize - 1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    if (destsize > 0)
        dest[i] = '\0';
    while (src[i] != 0)
        i++;
    return (i);
}
