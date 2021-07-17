/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melghoud <melghoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:32:58 by melghoud          #+#    #+#             */
/*   Updated: 2021/07/15 17:49:43 by melghoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3(t_stacks *stacks)
{
	int	lfo9;
	int	lwst;
	int	lt7t;

	lfo9 = stacks->array[stacks->index - 1];
	lwst = stacks->array[stacks->index - 2];
	lt7t = stacks->array[stacks->index - 3];
	if (lfo9 == 1 && lwst == 0 && lt7t == 2)
		sa(stacks);
	else if (lfo9 == 2 && lwst == 1 && lt7t == 0)
	{
		sa(stacks);
		rra(stacks);
	}
	else if (lfo9 == 2 && lwst == 0 && lt7t == 1)
		ra(stacks);
	else if (lfo9 == 0 && lwst == 2 && lt7t == 1)
	{
		sa(stacks);
		ra(stacks);
	}
	else if (lfo9 == 1 && lwst == 2 && lt7t == 0)
		rra(stacks);
}

void	sort_4(t_stacks *stacks)
{
	int		i;

	i = 0;
	while (i < stacks->index)
	{
		if (stacks->array[stacks->index] == 0)
			break ;
		i++;
	}
	while (stacks->array[stacks->index - 1] != 0)
	{
		if (i < stacks->index / 2)
			rra(stacks);
		else
			ra(stacks);
	}
	pb(stacks);
	i = stacks->index - 1;
	while (i >= 0)
	{
		stacks->array[i] -= 1;
		i--;
	}
	sort_3(stacks);
	pa(stacks);
}

void	sort_5(t_stacks *stacks)
{
	int		i;

	i = 0;
	while (i < stacks->index)
	{
		if (stacks->array[stacks->index] == 0)
			break ;
		i++;
	}
	while (stacks->array[stacks->index - 1] != 0)
	{
		if (i < stacks->index / 2)
			rra(stacks);
		else
			ra(stacks);
	}
	pb(stacks);
	i = stacks->index - 1;
	while (i >= 0)
	{
		stacks->array[i] -= 1;
		i--;
	}
	sort_4(stacks);
	pa(stacks);
}

int	is_sorted(t_stacks *stacks)
{
	int	i;

	i = 0;
	while (i < stacks->index - 1)
	{
		if (stacks->array[i] != (stacks->size - 1 - i))
			return (0);
		i++;
	}
	return (1);
}

void	sort(t_stacks *stacks)
{
	if (is_sorted(stacks))
		return ;
	else if (stacks->size == 2)
		sa(stacks);
	else if (stacks->size == 3)
		sort_3(stacks);
	else if (stacks->size == 4)
		sort_4(stacks);
	else if (stacks->size == 5)
		sort_5(stacks);
	else
		sort_l9lawi(stacks);
}
