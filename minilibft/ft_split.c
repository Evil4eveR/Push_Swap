/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarmoud <ymarmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 16:02:03 by ymarmoud          #+#    #+#             */
/*   Updated: 2026/04/05 13:36:25 by ymarmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	words;
	int		in_word;

	i = 0;
	words = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			in_word = 1;
			words++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (words);
}

static char	**free_split(char **split, size_t allocated)
{
	size_t	i;

	i = 0;
	while (i < allocated)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static int	fill_split(char **split, const char *s, char c)
{
	size_t	start;
	size_t	end;
	size_t	word_index;

	start = 0;
	word_index = 0;
	while (s[start])
	{
		while (s[start] == c)
			start++;
		if (!s[start])
			break ;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		split[word_index] = ft_substr(s, start, end - start);
		if (!split[word_index])
			return (free_split(split, word_index), 0);
		word_index++;
		start = end;
	}
	split[word_index] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	if (!fill_split(split, s, c))
		return (NULL);
	return (split);
}
