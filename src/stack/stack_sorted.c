/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 10:15:30 by pestell2          #+#    #+#             */
/*   Updated: 2025/05/07 13:55:51 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"
#include <stdio.h>

bool	stack_sorted(t_stack *stack)
{
	if (!stack){
		ft_printf("stack is NULL\n");
		return (false);
	}
	while (stack->next)
	{
		if (stack->num > stack->next->num)
			return (false);
		stack = stack->next;
	}
	return (true);
}
