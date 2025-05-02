/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 13:17:50 by pestell2          #+#    #+#             */
/*   Updated: 2025/05/02 15:43:03 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	sort_three(t_stack arr[3])
{
	int temp;

	if (arr[0].num > arr[1].num)
	{
		temp = arr[0].num;
		arr[0].num = arr[1].num;
		arr[1].num = temp;
	}
	if (arr[1].num > arr[2].num)
	{
		temp = arr[1].num;
		arr[1].num = arr[2].num;
		arr[2].num = temp;
	}
	if (arr[0].num > arr[1].num)
	{
		temp = arr[0].num;
		arr[0].num = arr[1].num;
		arr[1].num = temp;
	}
}
