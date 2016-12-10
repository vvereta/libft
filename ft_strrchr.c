/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvereta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 10:25:07 by vvereta           #+#    #+#             */
/*   Updated: 2016/11/28 10:48:09 by vvereta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ch;

	ch = NULL;
	while (*str)
	{
		if (*str == c)
			ch = (char*)str;
		str++;
	}
	if (*str == c)
		ch = (char*)str;
	return (ch);
}
