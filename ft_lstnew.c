/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvereta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 12:00:57 by vvereta           #+#    #+#             */
/*   Updated: 2016/11/29 13:18:58 by vvereta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_list;

	new_list = ft_memalloc(sizeof(t_list));
	if (!new_list)
		return (NULL);
	if (!content)
	{
		new_list->content = NULL;
		new_list->content_size = 0;
		new_list->next = NULL;
	}
	else
	{
		new_list->content = ft_memalloc(content_size);
		new_list->content = ft_memcpy(new_list->content, content, content_size);
		new_list->content_size = content_size;
		new_list->next = NULL;
	}
	return (new_list);
}
