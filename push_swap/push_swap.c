/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melghoud <melghoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:09:36 by melghoud          #+#    #+#             */
/*   Updated: 2021/07/17 11:45:16 by melghoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	if (initialisation(&stacks, argc, argv))
	{
		print(ERROR, 2);
		return (0);
	}
	free(stacks.tmp);
	sort(&stacks);
	return (0);
}
