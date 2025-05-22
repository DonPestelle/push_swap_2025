/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 13:17:50 by pestell2          #+#    #+#             */
/*   Updated: 2025/05/22 14:21:12 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sort_three(t_stack *stack)
{
	int a = stack->num;
	int b = stack->next->num;
	int c = stack->next->next->num;

	if (a > b && b < c && a < c)
		sa(stack); // caso 2 1 3 → 1 2 3
	else if (a > b && b > c)
	{
		sa(stack);
		rra(stack); // caso 3 2 1 → 1 2 3
	}
	else if (a > b && b < c && a > c)
		ra(stack); // caso 3 1 2 → 1 2 3
	else if (a < b && b > c && a < c)
	{
		sa(stack);
		ra(stack); // caso 2 3 1 → 1 2 3
	}
	else if (a < b && b > c && a > c)
		rra(stack); // caso 1 3 2 → 1 2 3
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	min;

	while (stack_len(*a) > 3)
	{
		min = find_min_index(*a);
		if (min == 0)
			pb(&a, &b);
		else if (min <= stack_len(*a) / 2)
			ra(&a);
		else
			rra(&a);
	}
	sort_three(*a);
	if (stack_len(*b) == 2 && (*b)->num < (*b)->next->num)
		sb(*b);
	while (*b)
		pa(&a, &b);
}

void	radix_sort(t_stack **a, t_stack **b)
{
	int	max_bits;
	int	i;
	int	j;
	int	size;

	normalize_stack(*a);
	max_bits = count_max_bits(*a);
	size = stack_len(*a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (((*a)->index >> i) & 1)
				ra(&a);
			else
				pb(&a, &b);
			j++;
		}
		while (*b)
			pa(&a, &b);
		i++;
	}
}
