/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:48:33 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/10/24 13:21:10 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = dst;
	s = (char *)src;
	if (dst < src)
		ft_memcpy(dst, src, n);
	else
	{
		while (d && n--)
		{
			d[n] = s[n];
		}
	}
	return (dst);
}
