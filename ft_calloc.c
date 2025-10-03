/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 12:31:03 by rpinheir          #+#    #+#             */
/*   Updated: 2025/10/03 13:08:55 by rpinheir         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	int	*ptr;
	int	*uptr;

	ptr = 0;
	uptr = 0;
	if (nmemb == 0 || size == 0)
		return (uptr);
	ptr = malloc(sizeof(nmemb * size));
	ft_memset(ptr, '\0', nmemb * size);
	return (ptr);
}
