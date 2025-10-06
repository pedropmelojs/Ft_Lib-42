/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinheir <rpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 11:27:29 by rpinheir          #+#    #+#             */
/*   Updated: 2025/10/06 14:32:33 by rpinheir         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */
int static ft_isspace(int c)
{
	if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	res;
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	
	while (ft_isspace(nptr[i]))
	{
		i++;	
	}
	if (nptr[i] == '+' && nptr[i + 1] != '-')
		i++;
	if (nptr[i] == '-')
	{	
		sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 - '0';
		res = res + nptr[i] - '0';
		i++;
	}
		res *= sign;
	return (res);
}

