/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 15:26:56 by rpinheir          #+#    #+#             */
/*   Updated: 2025/10/03 16:47:14 by rpinheir         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[i])
	{
		while (set[i] == s1[j])
		{
			
				
			i++;
			j++;
		}
		i++;
		j = 0;
	}
}
