/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:41:39 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/10/16 14:59:55 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char			*ptr;
	int				i;
	char			*tmp;
	unsigned char	ch;

	i = 0;
	ptr = (char *)str;
	tmp = NULL;
	ch = c;
	if (ch == 0)
		return (ptr + ft_strlen(ptr));
	while (ptr[i])
	{
		if (ptr[i] == ch)
			tmp = ptr + i;
		i++;
	}
	return (tmp);
}
