/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: norabino <norabino@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:02:24 by norabino          #+#    #+#             */
/*   Updated: 2024/11/15 11:24:03 by norabino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	temp = new;
	while (lst && lst->next)
	{
		if (!temp)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		temp->next = ft_lstnew(f(lst->next->content));
		temp = temp->next;
		lst = lst->next;
	}
	return (new);
}
