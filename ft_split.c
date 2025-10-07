/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 09:07:32 by rpinheir          #+#    #+#             */
/*   Updated: 2025/10/07 12:16:08 by rpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// trouver les strings avec end et start comme index dans s
// le premier et dernier char de chaque string trouvee)
#include <stdlib.h>

static int ft_findstart(char const *s, char c, int i)
{
	while (s[i])
	{
		if (s[i] != c)
			return (i);
		i++;
	}
	return (0);
}

static int	ft_findend(char const *s, char c)
{
	int	i;

	i = 0;
	i = ft_findstart(s, c, i);
	while (s[i] != c && s[i] != '\0')
	{
		if (s[i + 1] == c)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		count;
	char	**ptr;

	i = 0;
	count = 0;
	start = ft_findstart(s, c, i);
	ptr = malloc(sizeof(*ptr) * count);
	if (!ptr)
		return ((void *)0);
	while (s[i])
	{
		ptr[count][0] = s[start];
		if (i == ft_findend(s, c))
			i = ft_findend(s, c);
		count++;
	}
	return (ptr);
}

