#include "libft.h"
#include <ctype.h>

void toupper_adapt(unsigned int i, char *c)
{
    (void)i;
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
}