/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:54:28 by rpinheir          #+#    #+#             */
/*   Updated: 2025/10/03 15:10:03 by rpinheir         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		j;

	ptr = (malloc(sizeof(ft_strlen(s1) + ft_strlen(s2))));
	i = 0;
	j = 0;
	if (!ptr)
		return ((void *)0);
	while (s1[i])
	{
		ptr[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		ptr[j] = s2[i];
		j++;
		i++;
	}
	return (ptr);
}
