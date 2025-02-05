// Descripcion: Reserva (con malloc(3)) y devuelve una nueva string, formada por la concatenación de ’s1’ y ’s2’.
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    if (s1 == NULL || s2 == NULL)
        return (NULL);

    size_t s1_len;
    size_t s2_len;
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);

    char *new_str = (char *)malloc(s1_len + s2_len +1 * sizeof(char));
    size_t i;
    i = 0;
    while (i < s1_len){
        new_str[i] = s1[i];
        i++;
    }
    while (i < s1_len + s2_len){
        new_str[i] = s2[i - s1_len];
        i++;
    }
    return (new_str);
}