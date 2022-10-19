/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:32:37 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/10/16 14:55:33 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	int			n;
	char		*t;
	char		*s;

	i = 0;
	t = (char *)haystack;
	s = (char *)needle;
	if (!ft_strlen(s))
		return (t);
	if (len > ft_strlen(t))
		len = ft_strlen(t);
	while (i < len)
	{
		n = 0;
		while (t[i] && t[i + n] == s[n] && i + n < len)
			n++;
		if (!s[n])
			return (t + i);
		i++;
	}
	return (NULL);
}
