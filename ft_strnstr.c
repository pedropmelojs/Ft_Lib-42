/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:36:22 by rpinheir          #+#    #+#             */
/*   Updated: 2025/10/03 11:21:17 by rpinheir         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		cmp;

	cmp = ft_strncmp(big, little, ft_strlen(big));
	if (!*little)
		return ((char *)big);
	if (cmp)
		return (NULL);
	while (len--)
	{
		if (*little == *big)
			return ((char *)big);
	}
	return ((char *)little);
}
