/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:56:28 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/10/12 14:50:47 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t n)
{
	unsigned char	m1;
	unsigned char	m2;
	size_t			i;

	i = 0;
	while (i < n)
	{
		m1 = *((char *)p1 + i);
		m2 = *((char *)p2 + i);
		if (m1 != m2)
			return (m1 - m2);
		i++;
	}
	return (0);
}
