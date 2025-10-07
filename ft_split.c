/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 09:07:32 by rpinheir          #+#    #+#             */
/*   Updated: 2025/10/07 16:22:58 by rpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// trouver les strings avec end et start comme index dans s
// le premier et dernier char de chaque string trouvee)
#include "libft.h"
#include <stdlib.h>

static int	ft_findend(char const *s, char c, int i)
{
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

static int	ft_findstart(char const *s, char c, int i)
{
	while (s[i])
	{
		if (s[i] != c)
			return (i);
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	int		count;
	char	**arr;

	arr = 0;
	k = 0;
	i = ft_findstart(s, c, 0);
	count = 0;
	while (s[i] != '\0')
	{
		arr[count][i] = s[i];
		if (i == ft_findend(s, c, i) && ft_findend(s, c, i))
		{
			arr[count][i + 1] = '\0';
			count++;
			k = i;
			i = ft_findstart(s, c, k);
		}
		i++;
	}
	return (arr);
}

int	main(void)
{
	ft_split("hello !", 32);
}
