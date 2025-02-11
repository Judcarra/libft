/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judcarra <judcarra@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:28:40 by judcarra          #+#    #+#             */
/*   Updated: 2025/02/11 08:46:03 by judcarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_isalnum(int c)
{
    if(ft_isdigit(c) || ft_isalpha(c))
        return (1);
    else
        return (0);
}