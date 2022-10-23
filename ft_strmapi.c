/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:31:28 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/10/22 10:54:39 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*p;
	int		i;

	str = (char *)s;
	if (!str)
		return (NULL);
	p = malloc(ft_strlen(str) + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (str[i])
	{
		p[i] = (*f)(i, str[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
