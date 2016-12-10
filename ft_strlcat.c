/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvereta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 12:28:56 by vvereta           #+#    #+#             */
/*   Updated: 2016/11/25 13:34:43 by vvereta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t n)
{
	char			*d;
	const char		*s;
	size_t			sz;
	size_t			dlen;

	d = dst;
	s = src;
	sz = n;
	while (sz-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	sz = n - dlen;
	if (sz == 0)
		return (dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (sz != 1)
		{
			*d++ = *s;
			sz--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
