/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judcarra <judcarra@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 16:59:45 by judcarra          #+#    #+#             */
/*   Updated: 2025/01/01 16:59:59 by judcarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int ft_isalnum(int c)
{
    
    if(ft_isdigit(c) || ft_isalpha(c))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
