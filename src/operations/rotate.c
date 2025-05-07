/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:16:22 by pestell2          #+#    #+#             */
/*   Updated: 2025/05/05 10:59:30 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ra(t_stack *a)
{
	int	i;
	int	tmp;

	a->size = stack_len(a);
	if (a->size < 2)
		return ;
	i = 0;
	tmp = a->num;
	while (i < a->size - 1)
	{
		a->num = a->next->num;
		i++;
	}
	a->num = tmp;
	ft_printf("ra\n");
}

void	rb(t_stack *b)
{
	int	i;
	int	tmp;

	b->size = stack_len(b);
	if (b->size < 2)
		return ;
	i = 0;
	tmp = b->num;
	while (i < b->size - 1)
	{
		b->num = b->next->num;
		i++;
	}
	b->num = tmp;
	ft_printf("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	ft_printf("rr\n");
}
