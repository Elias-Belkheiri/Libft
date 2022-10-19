/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:10:39 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/10/15 11:46:01 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *ptr)
{
	char	*str;

	str = malloc(ft_strlen((char *)ptr) + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, ptr, ft_strlen((char *)ptr) + 1);
	return (str);
}
