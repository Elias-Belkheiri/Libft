/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:06:03 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/10/22 18:39:57 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*s;
	size_t		i;
	size_t		len;

	s = (char *)src;
	if (dst)
		len = ft_strlen(dst);
	i = 0;
	if (!dstsize || dstsize <= len)
		return (dstsize + ft_strlen(s));
	while (src[i] && i < dstsize - len - 1)
	{
		dst[i + len] = s[i];
		i++;
	}
	dst[i + len] = '\0';
	return (len + ft_strlen(s));
}
