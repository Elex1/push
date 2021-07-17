/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melghoud <melghoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:46:16 by melghoud          #+#    #+#             */
/*   Updated: 2021/07/17 12:10:22 by melghoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	pa(t_stacks *stacks)
{
	if (stacks->index < stacks->size)
	{
		(stacks->index)++;
		print("pa\n", 1);
	}
}

void	sa(t_stacks *stacks)
{
	if (stacks->index >= 2)
	{
		swap(&(stacks->array[stacks->index - 1]),
			&(stacks->array[stacks->index - 2]));
		print("sa\n", 1);
	}
}

void	pb(t_stacks *stacks)
{
	if (stacks->index > 0)
	{
		(stacks->index)--;
		print("pb\n", 1);
	}
}
