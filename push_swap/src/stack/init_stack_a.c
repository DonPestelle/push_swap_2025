/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 13:22:15 by pestell2          #+#    #+#             */
/*   Updated: 2025/05/07 08:51:18 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	init_stack_a(t_stack **a, char *av)
{
	long	n;
	int		i;

	i = 0;
	while (av[i])
	{
		if (error_syntax(&av[i]))
			free_errors(a);
		n = ft_atoi(&av[i]);
		if (n > INT_MAX || n < INT_MIN)
			free_errors(a);
		if (error_dup(*a, (int)n))
			free_errors(a);
		append_node(a, (int)n);
		i++;
	}
}
