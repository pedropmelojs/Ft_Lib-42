/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:35:42 by rpinheir          #+#    #+#             */
/*   Updated: 2025/10/02 12:35:01 by rpinheir         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	*res;

	res = NULL;
	while (s++)
	{
		if (s == c)
			res = s;
	}
	return (res);
}
