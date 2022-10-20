/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:52:03 by ebelkhei          #+#    #+#             */
/*   Updated: 2022/10/19 20:13:38 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	if (!str)
		return (0);
	while (*str)
	{
		i = 0;
		while (str[i] && str[i] != c)
			i++;
		if (i)
		{
			count++;
			str += i;
		}
		else
		str++;
	}
	if (count)
		return (count);
	return (1);
}

static void	ft_cpychars(char *str, char **p, char c)
{
	int		len;
	int		i;

	i = 0;
	while (str[i])
	{
		len = 0;
		while (str[i + len] && str[i + len] != c)
			len++;
		if (len)
		{
			*(p++) = ft_substr(str, i, len);
			i += len;
		}
		else
		i++;
	}
	if (!i)
		while (*p)
			*(p++) = NULL;
	else
	*p = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	char	*str;

	str = (char *)s;
	p = malloc((ft_count_words(str, c) + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	ft_cpychars(str, p, c);
	return (p);
}
