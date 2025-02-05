//Descripcion: Reserva (con malloc(3)) y devuelve una substring de la string ’s’. La substring empieza desde el índice ’start’ y tiene una longitud máxima ’len’.
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *str1)
{
    int len;
    char *new_str;

    len = ft_strlen((char*)str1 + 1);
    new_str = malloc(len);
    if(new_str)
    {
        int i;
        
        i = 0;
        while (str1[i] != '\0')
        {
            new_str[i] = str1[i];
            i++;
        }
    }
    return (new_str);
}


