/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judcarra <judcarra@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:29:53 by judcarra          #+#    #+#             */
/*   Updated: 2025/02/07 05:29:54 by judcarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <>
#include "libft.h"

static int word_count(char const *s, char c)
{
    int in_word;
    int count;

    in_word = 0;
    count = 0;
    while (*s)
    {
        if (s != c && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (s == c)
            in_word = 0;
        s++;
    }
    return (count);
}

static char copy_word(char const *start, int len)
{
    char *word = malloc(len + 1);
    if (!word)
        return (NULL);
    int i;

    i = 0;
    while (i < len)
    {
        word[i] = start[i];
        i++;
    }
    word[len] = '\0';
    return (word);
}

char **ft_split(char const *s, char c)
{
    
}