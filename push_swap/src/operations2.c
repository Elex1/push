/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melghoud <melghoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 12:03:19 by melghoud          #+#    #+#             */
/*   Updated: 2021/07/17 12:11:22 by melghoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_left(int *A, int len)
{
	int	i;
	int	tmp;

	tmp = A[0];
	i = 0;
	while (i < len - 1)
	{
		A[i] = A[i + 1];
		i++;
	}
	A[len - 1] = tmp;
}

void	rotate_right(int *A, int len)
{
	int	tmp;
	int	i;

	tmp = A[len - 1];
	i = len - 2;
	while (i >= 0)
	{
		A[i + 1] = A[i];
		i--;
	}
	A[0] = tmp;
}

void	ra(t_stacks *stacks)
{
	if (stacks->index > 1)
	{
		rotate_right(stacks->array, stacks->index);
		print("ra\n", 1);
	}
}

void	rra(t_stacks *stacks)
{
	if (stacks->index > 1)
	{
		rotate_left(stacks->array, stacks->index);
		print("rra\n", 1);
	}
}
