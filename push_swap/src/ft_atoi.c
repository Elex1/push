/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melghoud <melghoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:35:54 by melghoud          #+#    #+#             */
/*   Updated: 2021/07/17 11:40:22 by melghoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi2(int sign, long number, int *num)
{
	number = sign * number;
	if (number > INT_MAX || number < INT_MIN)
		return (0);
	*num = number;
	return (1);
}

int	ft_atoi(char *str, int *num)
{
	int		sign;
	int		i;
	long	number;

	sign = 1;
	i = 0;
	number = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			number = number * 10 + (str[i] - '0');
		else
			return (0);
		i++;
	}
	return (ft_atoi2(sign, number, num));
}
