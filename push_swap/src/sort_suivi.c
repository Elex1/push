/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_suivi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melghoud <melghoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:43:53 by melghoud          #+#    #+#             */
/*   Updated: 2021/07/17 12:05:27 by melghoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_l9lawi(t_stacks *stacks)
{
	int		max;
	int		i;
	int		j;

	i = 0;
	max = stacks->size - 1;
	while (max != 0)
	{
		j = stacks->size;
		while (j--)
		{
			if ((stacks->array[stacks->index - 1] & (1 << i)) == 0)
				pb(stacks);
			else
				ra(stacks);
		}
		while (stacks->index != stacks->size)
			pa(stacks);
		i++;
		max = max / 2;
	}
}
