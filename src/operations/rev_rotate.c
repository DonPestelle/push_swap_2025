/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:23:57 by pestell2          #+#    #+#             */
/*   Updated: 2025/05/05 10:06:45 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	rra(t_stack *a)
{
	int	i;
	int	tmp;

	a->size = stack_len(a);
	if (a->size < 2)
		return ;
	i = a->size - 1;
	tmp = a->num;
	while (i > 0)
	{
		a->num = a->prev->num;
		i--;
	}
	a->num = tmp;
	ft_printf("rra\n");
}

void	rrb(t_stack *b)
{
	int	i;
	int	tmp;

	b->size = stack_len(b);
	if (b->size < 2)
		return ;
	i = b->size - 1;
	tmp = b->num;
	while (i > 0)
	{
		b->num = b->prev->num;
		i--;
	}
	b->num = tmp;
	ft_printf("rrb\n");
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
	ft_printf("rrr\n");
}
