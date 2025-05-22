/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:21:00 by pestell2          #+#    #+#             */
/*   Updated: 2025/05/22 14:08:16 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**args;
	int	len;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (1);
	args = (argc == 2) ? ft_split(argv[1], ' ') : &argv[1];
	init_stack_a(&a, args);
	if (!stack_sorted(a))
	{
		len = stack_len(a);
		if (len == 2 && a->num > a->next->num)
			sa(a);
		else if (len == 3)
			sort_three(a);
		else if (len <= 5)
			sort_five(&a, &b);
		else
			radix_sort(&a, &b);
	}
	free_stack(&a);
	return (0);
}
