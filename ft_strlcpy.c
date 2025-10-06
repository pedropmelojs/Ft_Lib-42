/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:18:49 by rpinheir          #+#    #+#             */
/*   Updated: 2025/10/06 11:18:35 by rpinheir         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(src);

	if (size == 0)
		return (len);
	if (size < len)
		return (i);
	while (i < (size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		while (dst[i] != '\0')
		{
			dst[i] = '\0';
		}
	return (len);
}
