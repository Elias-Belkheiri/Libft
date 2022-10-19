/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:55:00 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/10/12 15:03:58 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*nw_str;
	int		i;

	str1 = (char *)s1;
	str2 = (char *)s2;
	nw_str = malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (nw_str == NULL)
		return (NULL);
	i = 0;
	while (str1[i])
	{
		nw_str[i] = str1[i];
		i++;
	}
	while (*str2)
	{
		nw_str[i] = *str2;
		i++;
		str2++;
	}
	nw_str[i] = '\0';
	return (nw_str);
}