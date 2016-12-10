/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvereta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 16:27:19 by vvereta           #+#    #+#             */
/*   Updated: 2016/11/30 16:54:35 by vvereta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	number;

	number = n;
	if (n < 0)
	{
		number *= -1;
		ft_putchar('-');
	}
	if (number > 9)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
		ft_putchar(number + '0');
}
