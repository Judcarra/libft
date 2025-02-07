/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judcarra <judcarra@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:28:33 by judcarra          #+#    #+#             */
/*   Updated: 2025/02/07 05:28:34 by judcarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //for calloc/malloc/realloc
#include "libft.h"
#include <stdio.h>
#include <stdint.h>
#include <string.h>

void    *ft_calloc(size_t num, size_t size)
{
    if(num > SIZE_MAX / size)
        return (NULL);

    size_t totalsize;
    void *ptr;

    totalsize = num * size;
    ptr = malloc(totalsize);

    if(ptr == NULL)
        return (NULL);

    ft_memset(ptr, 0, totalsize);

    return (ptr);
}