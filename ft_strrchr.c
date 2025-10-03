/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:35:42 by rpinheir          #+#    #+#             */
/*   Updated: 2025/10/03 11:20:26 by rpinheir         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int	*res;

	res = NULL;
	while (s++)
	{
		if (*(const char *)s == (char)c)
			*(unsigned char *)res = *(char *)s;
	}
	return ((char *)res);
}
