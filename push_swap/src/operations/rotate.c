/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:16:22 by pestell2          #+#    #+#             */
/*   Updated: 2025/05/02 14:07:00 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ra(t_stack *a)
{
	int	i;
	int	tmp;

	if (a->size < 2)
		return ;
	i = 0;
	tmp = a->stack[0];
	while (i < a->size - 1)
	{
		a->stack[i] = a->stack[i + 1];
		i++;
	}
	a->stack[i] = tmp;
	ft_printf("ra\n");
}

void	rb(t_stack *b)
{
	int	i;
	int	tmp;

	if (b->size < 2)
		return ;
	i = 0;
	tmp = b->stack[0];
	while (i < b->size - 1)
	{
		b->stack[i] = b->stack[i + 1];
		i++;
	}
	b->stack[i] = tmp;
	ft_printf("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	ft_printf("rr\n");
}
