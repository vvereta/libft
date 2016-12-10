/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvereta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 10:52:20 by vvereta           #+#    #+#             */
/*   Updated: 2016/11/28 11:52:53 by vvereta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char			*ptr;
	unsigned int	len;

	ptr = (char*)big;
	if (!*ptr && !*little)
		return (ptr);
	len = ft_strlen(little);
	while (*ptr)
	{
		if (!(ft_strncmp(ptr, little, len)))
			return (ptr);
		ptr++;
	}
	return (NULL);
}
