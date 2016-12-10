/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvereta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 15:16:52 by vvereta           #+#    #+#             */
/*   Updated: 2016/11/29 17:13:25 by vvereta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_length(int number)
{
	int		i;

	i = 1;
	while (number)
	{
		number /= 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char	*result;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(result = ft_strnew(ft_length(n))))
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		result[1] = '\0';
		result = ft_strjoin(result, ft_itoa(-n));
	}
	else if (n >= 10)
		result = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		result[0] = n + '0';
		result[1] = '\0';
	}
	return (result);
}
