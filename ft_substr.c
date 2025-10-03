/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:25:21 by rpinheir          #+#    #+#             */
/*   Updated: 2025/10/03 14:47:52 by rpinheir         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*ptr;

	i = start;
	j = 0;
	ptr = malloc(sizeof(len));
	while (s[i] - len)
	{
		ptr[j] = s[i];
		i++;
		j++;
	}
	if (ptr)
		return (ptr);
	return ((void *)0);
}
