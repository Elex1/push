/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melghoud <melghoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:10:31 by melghoud          #+#    #+#             */
/*   Updated: 2021/07/17 11:47:51 by melghoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

# define ERROR "ERROR\n"

typedef struct s_stacks
{
	int		*array;
	int		*tmp;
	int		index;
	int		size;
}				t_stacks;

int		initialisation(t_stacks *stacks, int argc, char **argv);

/*
operations 
*/
void	sa(t_stacks *stacks);
void	pb(t_stacks *stacks);
void	pa(t_stacks *stacks);
void	ra(t_stacks *stacks);
void	rra(t_stacks *stacks);
/*
sorting 
*/
void	sort(t_stacks *stacks);
void	sort_l9lawi(t_stacks *stacks);

/*
utils functions 
*/

int		ft_atoi(char *str, int *num);
void	print(char *str, int fd);
void	print_stacks(t_stacks *stacks);

#	endif