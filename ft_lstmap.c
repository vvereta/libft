/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvereta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 15:09:25 by vvereta           #+#    #+#             */
/*   Updated: 2016/11/29 15:38:39 by vvereta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlst;

	if (lst)
	{
		newlst = ft_memalloc(sizeof(lst));
		if (!newlst)
			return (NULL);
		newlst = f(lst);
		newlst->next = ft_lstmap(lst->next, f);
		return (newlst);
	}
	return (NULL);
}
