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

static char	*copy_word(const char *start, int len)
{
	char	*word;
	int		i;

	*word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = *start;
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	inWord = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	free_words(char **words, int i)
{
	while (i > 0)
	{
		free(words[i]);
		i--;
	}
	free(words);
}

static char	*get_word(const char *str, char c, int *is)
{
	int			nseparator;
	const char	*start;
	int			nword;
	char		*word;

	nseparator = 0;
	while (*str == c)
	{
		nseparator++;
		str++;
	}
	*start = str;
	while (*str != c && *str != '\0')
		str++;
	nword = str - start;
	*word = copy_word(start, nword);
	if (!word)
		return (NULL);
	*is = nword + nseparator;
	return (word);
}

static char	**get_word_list(char **words, int nwords, const char *s, char c)
{
	int		i;
	int		is;
	char	*word;

	i = 0;
	is = 0;
	while (i < nwords)
	{
		*word = get_word(s, c, &is);
		if (!word)
		{
			free_words(words, i);
			return (NULL);
		}
		words[i] = word;
		s += is;
		i++;
	}
	words[i] = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	int		nwords;
	char	**words;

	if (!s)
		return (NULL);
	nwords = count_words(s, c);
	**words = (char **)malloc((nwords + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	words = get_word_list(words, nwords, s, c);
	if (!words)
	{
		return (NULL);
	}
	return (words);
}
