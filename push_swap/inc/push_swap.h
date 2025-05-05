/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:17:54 by pestell2          #+#    #+#             */
/*   Updated: 2025/05/05 13:36:33 by pestell2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/inc/ft_printf.h"
# include "../libft/inc/libft.h"
# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				num;
	int				index;
	int				push_cost;
	bool			above_median;
	bool			cheapest;
	int				size;
	struct s_stack	*target_node;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

//__________functions__________//
// Main
long long int		ft_atoi(const char *str);
int					ft_printf(char const *format, ...);
// Errors
int					error_dup(t_stack *a, int n);
void				free_errors(t_stack **a);
int					error_syntax(char *str_n);
// Operations
// Stack
int					stack_len(t_stack *stack);
int					stack_sorted(t_stack *stack);
void				free_stack(t_stack **stack);
void				init_stack_a(t_stack **a, char *av);
// Node
t_stack				*new_node(int num);
void				append_node(t_stack **stack, int num);
// Algorithm
#endif
