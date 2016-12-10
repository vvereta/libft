/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvereta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 14:25:53 by vvereta           #+#    #+#             */
/*   Updated: 2016/11/24 14:41:45 by vvereta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char			*ptrdst;
	const unsigned char		*ptrsrc;

	ptrdst = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	if (ptrsrc < ptrdst)
	{
		ptrdst += len;
		ptrsrc += len;
		while (len--)
			*--ptrdst = *--ptrsrc;
	}
	else
		while (len--)
			*ptrdst++ = *ptrsrc++;
	return (dest);
}
