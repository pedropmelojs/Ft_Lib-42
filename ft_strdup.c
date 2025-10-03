/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 13:09:35 by rpinheir          #+#    #+#             */
/*   Updated: 2025/10/03 13:36:41 by rpinheir         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;

	ptr = malloc(sizeof(ft_strlen(s) + 1));
	ft_strlcpy(ptr, s, ft_strlen(s) + 1);
	if (ptr)
		return (ptr);
	return (NULL);
}
