/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melghoud <melghoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 16:05:35 by melghoud          #+#    #+#             */
/*   Updated: 2021/07/17 11:57:23 by melghoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	print(char *str, int fd)
{
	write(fd, str, ft_strlen(str));
}

void	print_stacks(t_stacks *stacks)
{
	int	i;

	printf("A : ");
	i = stacks->index - 1;
	while (i >= 0)
	{
		printf("%d ", stacks->array[i]);
		i--;
	}
	printf("\nB : ");
	i = stacks->index;
	while (i < stacks->size)
	{
		printf("%d ", stacks->array[i]);
		i++;
	}
	printf("\n");
}
