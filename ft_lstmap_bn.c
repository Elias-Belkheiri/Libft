/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bn.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:27:34 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/10/18 21:37:33 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*nw_lst;
	t_list	*head;
	t_list	*ptr;
	int		i;

	head = NULL;

	ptr = lst;
	i = 0;
	if (lst && f && del)
	{
		while (ptr->next)
		{
    		if (!i)
    		{
        		head = ft_lstnew(f(ptr->content));
				nw_lst = head;
        		i = 1;
    		}
    		else
			{
				nw_lst->next = ft_lstnew(f(ptr->content));
				nw_lst = nw_lst->next;
			}
    		ptr = ptr->next;
		}
		nw_lst->next = ft_lstnew(f(ptr->content));
		return (head);
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	t_list      elem;
    t_list      elem2;
    t_list      elem3;
    t_list      elem4;
    t_list      *list;

	elem.content  = "A";
	elem2.content  = "B";
	elem3.content  = "C";
	elem4.content  = "D";

    elem.next = &elem2;
    elem2.next = &elem3;
    elem3.next = &elem4;
	elem4.next = NULL;
	
	list = ft_lstmap(&elem, ft_map, ft_del);
    while (list->next)
    {
        printf("%s\n", list->content);
		list = list->next;
    }
	printf("%s\n", list->content);
}
*/