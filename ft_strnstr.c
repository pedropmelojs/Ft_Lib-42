/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:36:22 by rpinheir          #+#    #+#             */
/*   Updated: 2025/10/02 14:51:30 by rpinheir         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	int		cmp;

	cmp = ft_strncmp(big, little, ft_strlen(big));
	if (!little)
		return (big);
	if (cmp)
		return (NULL);
	while (big++ || len--)
	{
		if (little == big)
			return (big);
	}
}
