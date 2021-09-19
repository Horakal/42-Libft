/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdos-rei <fdos-rei@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:17:31 by fdos-rei          #+#    #+#             */
/*   Updated: 2021/09/16 18:17:31 by fdos-rei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*save;

	if (!lst || !f || !del)
		return (NULL);
	new_list = ft_lstnew((*f)(lst->content));
	if (new_list == NULL)
		return (NULL);
	save = new_list;
	lst = lst->next;
	while (lst)
	{
		new_list->next = ft_lstnew((*f)(lst->content));
		if (!new_list->next)
		{
			ft_lstclear(&save, del);
			return (NULL);
		}
		new_list = new_list->next;
		lst = lst->next;
	}
	return (save);
}
