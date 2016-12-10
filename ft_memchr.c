/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvereta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 17:17:26 by vvereta           #+#    #+#             */
/*   Updated: 2016/11/23 17:58:43 by vvereta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char		*ptr;

	ptr = str;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void*)ptr);
		ptr++;
	}
	return (NULL);
}
