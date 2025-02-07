/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judcarra <judcarra@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:29:17 by judcarra          #+#    #+#             */
/*   Updated: 2025/02/07 05:29:18 by judcarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memchr(void *buf, int val, size_t count)
{
    unsigned char *bff = (unsigned char *) buf;
    unsigned char c = (unsigned char)val;
    size_t i = 0;
    
    while (i < count)
    {
        if (bff[i] == c)
        {
            return (&bff[i]);
        }
        i++;
    }
    
    return (NULL);
}