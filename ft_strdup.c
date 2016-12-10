/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvereta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 14:32:22 by vvereta           #+#    #+#             */
/*   Updated: 2016/11/22 16:03:58 by vvereta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	int		len;

	len = ft_strlen(s1);
	result = (char*)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	ft_strcpy(result, s1);
	return (result);
}
