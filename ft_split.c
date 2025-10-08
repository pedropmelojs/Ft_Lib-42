/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 09:07:32 by rpinheir          #+#    #+#             */
/*   Updated: 2025/10/08 11:47:28 by rpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_findend(char const *s, char c)
{
	int	i;

	i = ft_strchr(s, c) - s;
	while (s[i] != c && s[i] != '\0')
	{
		if (s[i + 1] == c)
		{
			return (i);
		}
		i++;
	}
	return (i - 1);
}

static int	ft_count(const char *s, char c, int count)
{
	int	inword;
	int	i;

	i = 0;
	inword = 0;
	while (s[i])
	{
		if (s[i] != c && !inword)
		{
			count++;
			inword = 1;
		}
		else if (s[i] == c)
		{
			inword = 0;
		}
		i++;
	}
	return (count);
}

static void	ft_stringtoptr(const char *s, char c, char **ptr)
{
	int	i;
	int	index;
	int	k;
	int	start;

	i = 0;
	k = 0;
	index = 0;
	start = ft_strchr(s, c) - s;
	while (s[i])
	{
		ptr[index][k] = s[start];
		k++;
		if (i == ft_findend(s, c))
		{
			k = 0;
			start = ft_strchr(s, c) - s;
			index++;
		}
		i++;
	}
}

// TODO - Fonction pour compter la taille de chaque string pour le malloc
char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		count;

	count = ft_count(s, c, 0);
	ptr = ft_calloc(count + 1, sizeof(char *));
	if (!ptr)
		return ((void *)0);
	ft_stringtoptr(s, c, ptr);
	return (ptr);
}
