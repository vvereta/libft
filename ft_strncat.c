/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvereta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 12:06:29 by vvereta           #+#    #+#             */
/*   Updated: 2016/11/25 12:56:12 by vvereta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	while (s2[i] && n)
	{
		s1[len] = s2[i];
		len++;
		i++;
		n--;
	}
	s1[len] = '\0';
	return (s1);
}