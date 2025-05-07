/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:21:00 by pestell2          #+#    #+#             */
/*   Updated: 2025/05/07 11:31:05 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;
	int		i;

	stack = NULL;
	i = 1;
	if (argc < 2)
		return (1);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	init_stack_a(&stack, argv[i + 1]);
	if (!stack_sorted(stack))
		sort_three(stack);
	free_stack(&stack);
	return (0);
}
