/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvereta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 12:38:27 by vvereta           #+#    #+#             */
/*   Updated: 2016/11/30 19:21:50 by vvereta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((str1[i] == str2[i]) && (i < n))
		if (str2[i++] == '\0')
			return (0);
	if (i == n)
		return (0);
	return (((unsigned char*)str1)[i] - ((unsigned char*)str2)[i]);
}
