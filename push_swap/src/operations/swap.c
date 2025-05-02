/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:07:35 by pestell2          #+#    #+#             */
/*   Updated: 2025/05/02 15:36:52 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sa(t_stack *a)
{
	int	tmp;

	if (a->size < 2)
		return ;
	tmp = a->stack[0];
	a->stack[0] = a->stack[1];
	a->stack[1] = tmp;
	ft_printf("sa\n");
}

void	sb(t_stack *b)
{
	int	tmp;

	if (b->size < 2)
		return ;
	tmp = b->stack[0];
	b->stack[0] = b->stack[1];
	b->stack[1] = tmp;
	ft_printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
	ft_printf("ss\n");
}
