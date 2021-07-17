/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialisation.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melghoud <melghoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:26:03 by melghoud          #+#    #+#             */
/*   Updated: 2021/07/17 11:55:44 by melghoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_duplicate(int *tmp, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tmp[i] == tmp[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	get_order(t_stacks *stacks)
{
	int		i;
	int		j;
	int		less;

	stacks->array = malloc(sizeof(int) * stacks->size);
	if (stacks->array == NULL)
	{
		free(stacks->tmp);
		exit(1);
	}
	i = 0;
	while (i < stacks->size)
	{
		less = 0;
		j = 0;
		while (j < stacks->size)
		{
			if (stacks->tmp[j] < stacks->tmp[i])
				less++;
			j++;
		}
		stacks->array[i] = less;
		i++;
	}
}

int	check_args(t_stacks *stacks, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_atoi(argv[i], &(stacks->tmp[argc - 1 - i])) == 0)
		{
			free(stacks->tmp);
			return (1);
		}
		i++;
	}
	return (0);
}

int	initialisation(t_stacks *stacks, int argc, char **argv)
{
	if (argc == 1)
		exit(0);
	stacks->tmp = malloc(sizeof(int) * (argc - 1));
	if (stacks->tmp == NULL)
		exit(1);
	if (check_args(stacks, argc, argv))
		return (1);
	stacks->size = argc - 1;
	stacks->index = stacks->size;
	if (check_duplicate(stacks->tmp, stacks->size))
	{
		free(stacks->tmp);
		return (1);
	}
	get_order(stacks);
	return (0);
}
