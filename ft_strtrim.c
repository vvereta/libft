/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvereta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 14:21:54 by vvereta           #+#    #+#             */
/*   Updated: 2016/11/29 17:13:59 by vvereta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		iswhitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

char			*ft_strtrim(char const *s)
{
	unsigned int	begin;
	unsigned int	end;
	unsigned int	len;

	if (!s)
		return (NULL);
	begin = 0;
	while (s[begin] && iswhitespace(s[begin]))
		begin++;
	end = ft_strlen(s);
	while (begin < end && iswhitespace(s[end - 1]))
		end--;
	if (begin == end)
		return (ft_strnew(1));
	len = end - begin;
	return (ft_strsub(s, begin, len));
}
