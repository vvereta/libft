/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvereta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 17:18:16 by vvereta           #+#    #+#             */
/*   Updated: 2016/11/25 16:35:06 by vvereta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *str)
{
	int	index;

	index = 0;
	if (!str)
		return ;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}
