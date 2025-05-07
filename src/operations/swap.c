/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:07:35 by pestell2          #+#    #+#             */
/*   Updated: 2025/05/05 10:01:36 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	sa(t_stack *a)
{
	int	tmp;

	a->size = stack_len(a);
	if (a->size < 2)
		return ;
	tmp = a->num;
	a->num = a->next->num;
	a->next->num = tmp;
	ft_printf("sa\n");
}

void	sb(t_stack *b)
{
	int	tmp;

	b->size = stack_len(b);
	if (b->size < 2)
		return ;
	tmp = b->num;
	b->num = b->next->num;
	b->next->num = tmp;
	ft_printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
	ft_printf("ss\n");
}
