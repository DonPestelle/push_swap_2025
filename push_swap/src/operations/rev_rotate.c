/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:23:57 by pestell2          #+#    #+#             */
/*   Updated: 2025/05/02 14:06:50 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	rra(t_stack *a)
{
	int	i;
	int	tmp;

	if (a->size < 2)
		return ;
	i = a->size - 1;
	tmp = a->stack[i];
	while (i > 0)
	{
		a->stack[i] = a->stack[i - 1];
		i--;
	}
	a->stack[i] = tmp;
	ft_printf("rra\n");
}

void	rrb(t_stack *b)
{
	int	i;
	int	tmp;

	if (b->size < 2)
		return ;
	i = b->size - 1;
	tmp = b->stack[i];
	while (i > 0)
	{
		b->stack[i] = b->stack[i - 1];
		i--;
	}
	b->stack[i] = tmp;
	ft_printf("rrb\n");
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
	ft_printf("rrr\n");
}
