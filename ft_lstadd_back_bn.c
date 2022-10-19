/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:27:03 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/10/18 15:29:26 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *prv;

    prv = *lst;
    if (!new->next)
        new->next = NULL;
    if (!(*lst))
    {
         *lst = new;
         return ;
    }
    while (prv->next)
            prv = prv->next;
    prv->next = new;

}