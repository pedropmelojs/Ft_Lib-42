/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 11:27:29 by rpinheir          #+#    #+#             */
/*   Updated: 2025/10/03 12:30:54 by rpinheir         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	res;
	int	sign;

	sign = 1;
	if (*nptr)
		return (0);
	while (*nptr == 32 || *nptr == '\t' || *nptr == '\n' || *nptr == '\v'
		|| *nptr == '\f' || *nptr == '\r')
	{
		if (*nptr == '-')
			sign = -sign;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 - '0';
		res = res % 10 - '0';
	}
	return (res * sign);
}
