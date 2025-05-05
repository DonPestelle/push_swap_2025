/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 13:02:35 by pestell2          #+#    #+#             */
/*   Updated: 2025/05/05 13:34:58 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	error_syntax(char *str_n)
{
	if (!(*str_n == '+' || *str_n == '-' || (*str_n >= '0' && *str_n <= '9')))
	{
		if ((*str_n == '+' || *str_n == '-') && !(str_n[1] >= '0' \
				&& str_n[1] <= '9'))
		{
			while (++str_n)
			{
				if (!(*str_n >= '0' && *str_n <= '9'))
					return (1);
			}
		}
	}
	return (0);
}

int	error_dup(t_stack *a, int n)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->num == n)
			return (1);
		a = a->next;
	}
	return (0);
}

void	free_errors(t_stack **a)
{
	free_stack(a);
	ft_printf("Error\n");
	exit(1);
}
