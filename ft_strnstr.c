/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvereta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 11:33:29 by vvereta           #+#    #+#             */
/*   Updated: 2016/11/28 11:52:56 by vvereta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char			*ptr;
	unsigned int	size;

	ptr = (char*)big;
	if (!*ptr && !*little)
		return (ptr);
	size = ft_strlen(little);
	while (*ptr && len >= size)
	{
		if (!(ft_strncmp(ptr, little, size)))
			return (ptr);
		ptr++;
		len--;
	}
	return (NULL);
}
