/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 13:22:15 by pestell2          #+#    #+#             */
/*   Updated: 2025/05/22 14:04:36 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	init_stack_a(t_stack **a, char **av)
{
	long	n;
	int		i;

	i = 0;
	while (av[i])
	{
		if (error_syntax(av[i]))
			free_errors(a);
		n = ft_atoi(av[i]);
		if (n > INT_MAX || n < INT_MIN)
			free_errors(a);
		if (error_dup(*a, (int)n))
			free_errors(a);
		append_node(a, (int)n);
		i++;
	}
}

int	find_min_index(t_stack *stack)
{
	int	min;
	int	idx;
	int	min_idx;
	t_stack	*temp;

	min = stack->num;
	min_idx = 0;
	temp = stack;
	idx = 0;
	while (temp)
	{
		if (temp->num < min)
		{
			min = temp->num;
			min_idx = idx;
		}
		temp = temp->next;
		idx++;
	}
	return (min_idx);
}

void	normalize_stack(t_stack *a)
{
	t_stack *i;
	t_stack *j;
	int	index;

	i = a;
	while (i)
	{
		index = 0;
		j = a;
		while (j)
		{
			if (j->num < i->num)
				index++;
			j = j->next;
		}
		i->index = index;
		i = i->next;
	}
}

int	count_max_bits(t_stack *a)
{
	int	max;
	int	bits;

	max = 0;
	while (a)
	{
		if (a->index > max)
			max = a->index;
		a = a->next;
	}
	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}
