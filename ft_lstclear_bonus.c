/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:27:14 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/10/21 10:02:57 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_delndcl(t_list *ptr, void (*del)(void *))
{
	if (ptr->next)
		ft_delndcl(ptr->next, del);
	ft_lstdelone(ptr, del);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (lst && del)
	{
		ptr = *lst;
		ft_delndcl(ptr, del);
		*lst = NULL;
	}
}
