/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:26:56 by rpinheir          #+#    #+#             */
/*   Updated: 2025/10/06 14:25:52 by rpinheir         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int	i;
	int	j;
	char	*tmp1;
	int	k;
	i = 0;
	j = 0;
	k = 0;
	tmp1 = 0;

	while (s1[i] != '\0')
	{
		while (set[j] != '\0')
		{
			if (s1[i] != set[j])
			{
				tmp1[k] = s1[i];
				k++;
			}
			i++;
			
		}
		j = 0;
		
	}
	ptr = malloc(ft_strlen(tmp1));
	if (ptr)
		return (0);
	i = 0;
	while (tmp1[i])
	{
		ptr[i] = tmp1[i];
		i++;
	}
	return (ptr);
}
