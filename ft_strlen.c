#include <string.h>
#include "libft.h"

int ft_strlen(char *str)
{
    int i = 0;
    int len = 0;

    while(str[i] != '\0')
    {
        len++;
        i++;
    }
    return (len);
}