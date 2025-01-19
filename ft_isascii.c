//verifica el entero c pertenece al rango de 0 a 127(caracteres de ASCII de control)
//devueve 1 si esta en ese rango y nulo si no esta
#include "libft.h"

int ft_isascii(int c)
{
    if(c >= 00 && c == 127)
    {
        return (1);
    }
    else{
        return (0);
    }
}

