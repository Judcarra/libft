/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judcarra <judcarra@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 05:29:53 by judcarra          #+#    #+#             */
/*   Updated: 2025/02/07 16:40:23 by judcarra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static char *copyWord(const char *start, int len)
{
    char *word = (char*)malloc((len + 1) * sizeof(char));

    if (!word)
        return NULL;

    int i;
    i = 0;
    while (i < len)
    {
        word[i] = *start;
        i++;
        start++;
    }
    word[i] = '\0';

    return word;
}

static int countWords(char const *s, char c)
{
    int count;
    int inWord;

    inWord = 0;
    count = 0;

    while (*s)
    {
        if (*s != c && !inWord)
        {
            count++;
            inWord = 1;
        }
        else if (*s == c)
            inWord = 0;

        s++;
    }
    return count;
}

static void freeWords(char **words, int i)
{
    while (i > 0)
    {
        free(words[i]);
        i--;
    }
    free(words);
}

static char *getWord(const char *str, char c, int *is)
{
    int nseparator = 0;
    while (*str == c)
    {
        nseparator++;
        str++;
    }

    const char *start = str;
    while (*str != c && *str != '\0')
        str++;

    int nword = str - start;

    char *word = copyWord(start, nword);
    if (!word)
        return NULL;

    *is = nword + nseparator;
    return word;
}

static char **getWordList(char **words, int nwords, const char *s, char c)
{
    int i;
    i = 0;
    int is = 0;

    while (i < nwords)
    {
        char *word = getWord(s, c, &is);
        if (!word)
        {
            freeWords(words, i);
            return NULL;
        }
        words[i] = word;
        s += is;
        i++;
    }
    words[i] = NULL;
    return words;
}


char **ft_split(char const *s, char c)
{
    if (!s)
        return NULL;

    int nwords = countWords(s, c);
    char **words = (char **)malloc((nwords + 1) * sizeof(char *));
    if (!words)
        return NULL;

    words = getWordList(words, nwords,  s, c);
    if (!words)
    {
        return NULL;
    }

    return words;
}