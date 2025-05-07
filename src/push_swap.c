/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:21:00 by pestell2          #+#    #+#             */
/*   Updated: 2025/05/07 13:36:39 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
void	print_stack(t_stack *stack)
{
	while (stack)
	{
		printf("%d\n", stack->num);
		stack = stack->next;
	}
}
int	main(int argc, char **argv)
{
	t_stack	*stack;

	stack = NULL;
	if (argc < 2)
		return (1);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	init_stack_a(&stack, argv);
	if (!stack_sorted(stack)){
		ft_printf("Error\n");
		sort_three(stack);
		print_stack(stack);
	}
	free_stack(&stack);
	return (0);
}
