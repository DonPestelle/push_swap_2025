/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestell2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:17:54 by pestell2          #+#    #+#             */
/*   Updated: 2025/05/22 14:11:44 by pestell2         ###   ########.fr       */
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
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);
void				rra(t_stack *a);
void				rrb(t_stack *b);
void				rrr(t_stack *a, t_stack *b);
void				ra(t_stack *a);
void				rb(t_stack *b);
void				rr(t_stack *a, t_stack *b);
void				sa(t_stack *a);
void				sb(t_stack *b);
void				ss(t_stack *a, t_stack *b);
// Stack
int					stack_len(t_stack *stack);
bool				stack_sorted(t_stack *stack);
void				free_stack(t_stack **stack);
void				init_stack_a(t_stack **a, char **av);
int					count_max_bits(t_stack *a);
void				normalize_stack(t_stack *a);

// Node
t_stack				*new_node(int num);
void				append_node(t_stack **stack, int num);
// Algorithm
void				sort_three(t_stack *stack);
void				radix_sort(t_stack **a, t_stack **b);
int					find_min_index(t_stack *stack);
void				sort_five(t_stack **a, t_stack **b);

#endif
