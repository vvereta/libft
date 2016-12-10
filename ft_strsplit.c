/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvereta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 10:51:13 by vvereta           #+#    #+#             */
/*   Updated: 2016/11/29 12:00:14 by vvereta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words_count(char const *s, char c)
{
	int words;
	int i;
	int flag;

	i = 0;
	words = 0;
	flag = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			flag = 0;
		else if (flag == 0 && s[i] != c)
		{
			flag = 1;
			words++;
		}
		i++;
	}
	return (words);
}

static int	ft_length(char const *s, int index, char c)
{
	int		result;

	result = 0;
	if (*s == 0)
		return (result);
	while (s[index] != '\0' && s[index] != c)
	{
		index++;
		result++;
	}
	return (result);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**words;
	char	*string;
	int		word_length;
	int		wordcount;

	wordcount = 0;
	i = -1;
	if (!s)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (ft_words_count(s, c) + 1));
	if (!words)
		return (NULL);
	while (s[++i])
		if (s[i] != c)
		{
			word_length = ft_length(s, i, c);
			string = ft_strnew(word_length);
			ft_strncpy(string, s + i, word_length);
			string[word_length] = '\0';
			words[wordcount++] = string;
			i += word_length - 1;
		}
	words[wordcount] = NULL;
	return (words);
}
