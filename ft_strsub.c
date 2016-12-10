/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvereta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 11:00:11 by vvereta           #+#    #+#             */
/*   Updated: 2016/11/25 11:33:17 by vvereta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*result;

	i = 0;
	if (!len || !s || !(result = ft_strnew(len)))
		return (NULL);
	while (i < len)
		result[i++] = s[start++];
	return (result);
}
