/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvereta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 11:29:50 by vvereta           #+#    #+#             */
/*   Updated: 2016/11/24 11:33:45 by vvereta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *str1, const char *str2)
{
	unsigned int		i;
	unsigned int		res;
	const unsigned char	*s1;
	const unsigned char *s2;

	i = 0;
	res = 0;
	s1 = (const unsigned char*)str1;
	s2 = (const unsigned char*)str2;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	return (res = s1[i] - s2[i]);
}
