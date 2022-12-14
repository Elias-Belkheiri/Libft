/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:03:48 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/10/23 11:18:51 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		f(i, str + i);
		i++;
	}
	str[i] = '\0';
}
