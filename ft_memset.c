//establece el primer recuento de bytes de *dest en el valor c (que se convierte en un caracter sin signo)
//devuelve un puntero a dest

#include <stddef.h>
#include "libft.h"

void *ft_memset(void *dest, int c, size_t count)
{
    unsigned char *ptr = dest;
    size_t i = 0;

    while(i < count)
    {
        ptr[i] = c;
        i++;
    }
    return (dest);
}