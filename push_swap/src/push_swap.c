/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:21:00 by pestell2          #+#    #+#             */
/*   Updated: 2025/05/02 13:42:46 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
int	main(int ac, char **av)
{
	t_stack_node *a;
	t_stack_node *b;

	a = NULL; 
	b = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return (1);
	else if (2 == ac)
		av = ft_split(av[1], ' ');
}
*/
int main(int ac, char **av)
{
    int stack_a[3] = {12, 7, 10};

    sort_three(stack_a);

    // Print the sorted array
    ft_printf("Sorted array: %d %d %d\n", stack_a[0], stack_a[1], stack_a[2]);

    return 0;
}
