/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:55:45 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/10/25 19:06:50 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*dup;

	str = (char *)s;
	if (!str)
		return (NULL);
	if (start > ft_strlen(str))
		return (ft_strdup(""));
	if (len > ft_strlen(str + start))
	{
		dup = malloc(ft_strlen(str + start) + 1);
		len = ft_strlen(str + start);
	}
	else
		dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, str + start, len + 1);
	return (dup);
}
