/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvereta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 16:48:12 by vvereta           #+#    #+#             */
/*   Updated: 2016/11/22 18:12:06 by vvereta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char			*destptr;
	const unsigned char		*srcptr;

	destptr = (unsigned char*)dest;
	srcptr = (unsigned char*)src;
	while (n--)
	{
		*destptr = *srcptr;
		if (*srcptr == (unsigned char)c)
			return (++destptr);
		destptr++;
		srcptr++;
	}
	return (NULL);
}
