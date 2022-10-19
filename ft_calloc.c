/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:57:01 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/10/13 18:58:59 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*a;

	if (size && nitems >= SIZE_MAX / size)
		return (NULL);
	a = malloc(nitems * size);
	if (a == NULL)
		return (NULL);
	ft_bzero(a, nitems * size);
	return (a);
}
