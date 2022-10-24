/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:27:34 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/10/23 11:29:34 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_cpy(t_list *lst, t_list *head, void *(*f)(void *))
{
	t_list	*nw_lst;
	t_list	*ptr;

	ptr = lst;
	while (ptr)
	{
		if (!head)
		{
			head = ft_lstnew(f(ptr->content));
			nw_lst = head;
		}
		else
		{
			nw_lst->next = ft_lstnew(f(ptr->content));
			nw_lst = nw_lst->next;
		}
		ptr = ptr->next;
	}
	return (head);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;

	head = NULL;
	if (lst && f && del)
	{
		head = ft_cpy(lst, head, f);
		return (head);
	}
	return (NULL);
}
