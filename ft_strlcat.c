/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 09:58:50 by rpinheir          #+#    #+#             */
/*   Updated: 2025/10/02 10:56:02 by rpinheir         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	init_length;

	init_length = ft_strlen(dst);
	while (size > 1 && ft_strlen(dst) - 1 == 0)
	{
		*dst++ = *src++;
	}
	return (init_length + ft_strlen(src));
}
