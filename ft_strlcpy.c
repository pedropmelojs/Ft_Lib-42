/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:18:49 by rpinheir          #+#    #+#             */
/*   Updated: 2025/09/30 16:22:27 by rpinheir         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	i++;
	dest[i] = '\0';
	return (ft_strlen(src));
}
