/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:27:44 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/10/19 20:09:54 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	if (!lst)
		return (0);
	len = 1;
	while (lst->next)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
