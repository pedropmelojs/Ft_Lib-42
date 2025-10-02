/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 12:42:49 by rpinheir          #+#    #+#             */
/*   Updated: 2025/10/02 14:48:08 by rpinheir         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while ((s1++ || s2++) || n--)
	{
		if (s1 != s2)
			return (s1 - s2);
	}
	return (0);
}
