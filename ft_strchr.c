/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:15:48 by rpinheir          #+#    #+#             */
/*   Updated: 2025/10/03 11:56:23 by rpinheir         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(const char *s, int c)
{
	while (s++)
	{
		if (*(const char *)s == (char)c)
			return ((char *)s);
	}
	return ((void *)0);
}
