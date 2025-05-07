/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 09:48:36 by pestell2          #+#    #+#             */
/*   Updated: 2025/05/05 09:56:31 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	stack_len(t_stack *stack)
{
	int	i;

	if (!stack)
		return (0);
	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}
/*
int	main(void)
{
	t_stack *stack = NULL;
	t_stack *node1 = malloc(sizeof(t_stack));
	t_stack *node2 = malloc(sizeof(t_stack));
	t_stack *node3 = malloc(sizeof(t_stack));

	node1->num = 1;
	node2->num = 2;
	node3->num = 3;

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	stack = node1;

	int len = stack_len(stack);
	printf("Length of stack: %d\n", len);

	// Clean up
	free(node1);
	free(node2);
	free(node3);

	return (0);
}*/
