/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judcarra <judcarra@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:28:17 by judcarra          #+#    #+#             */
/*   Updated: 2025/02/10 04:37:28 by judcarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

    // dividir 10
    //n = char(n)+48
static int countDigits(int num)
{
    if (num == 0)
        return (1);

    int count;
    count = 0;
    while (num >= 1)
    {
        count++;
        num /= 10;
    }
    return count;
}

static char *convertToStr(int n, int space, char *str)
{
    if (n == 0) {
        str[0] = '0';
        str[1] = '\0';
        return str;
    }
    int nDigits;
    nDigits = countDigits(n);
    
    int i = nDigits - space;
    while (n >= 1)
    {
        int digit;
        digit = n % 10;
        char charDigit = (char) digit + 48;
        str[i] = charDigit;
        i--;
        n /= 10;
    }
    return str;
}

char    *ft_itoa(int n)
{
    if (n == 0)
        return (0);

     if (n == 0) 
    {
        char *str = (char *)malloc(2 * sizeof(char)); // 2: '0' + '\0'
        if (!str) return NULL;
        str[0] = '0';
        str[1] = '\0';
        return str;
    }
    
    char *str;
    str = (char *)malloc(21 * sizeof(char)); //19 es el maximo de digitos que puede tener un int en arquitectura de 64bits, 2 extra para negativo y para \0
    if (!str)
        return NULL;
        
    int space;
    space = 1;
    if(n < 0){
        space = 0;
        *str = '-';
        n = -n;
    }
    
    return convertToStr(n, space, str);
}

