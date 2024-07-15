/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:20:27 by antalvar          #+#    #+#             */
/*   Updated: 2024/07/15 15:47:23 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "./libft/libft.h"

typedef struct s_stack
{
	int					value;
	int					pos;
	int					push_cost;
	bool				above_med;
	bool				cheapest;
	struct s_stack		*target_node;
	struct s_stack		*next;
	struct s_stack		*prev;
}	t_stack;

//***Handle errors
int				error_syntax(char *str_n);
int				error_duplicate(t_stack *a, int n);
void			free_stack(t_stack **stack);
void			free_errors(t_stack **a);

//***Stack initiation
void			init_stack_a(t_stack **a, char **argv);
char			**split(char *s, char c);

//***Nodes initiation
void			init_nodes_a(t_stack *a, t_stack *b);
void			init_nodes_b(t_stack *a, t_stack *b);
void			current_pos(t_stack *stack);
void			set_cheapest(t_stack *stack);
t_stack			*get_cheapest(t_stack *stack);
void			prep_for_push(t_stack **s, t_stack *n, char c);

//***Stack utils
int				stack_len(t_stack *stack);
t_stack			*find_last(t_stack *stack);
bool			stack_sorted(t_stack *stack);
t_stack			*find_min(t_stack *stack);
t_stack			*find_max(t_stack *stack);

//***Commands
void			sa(t_stack **a, bool print);
void			sb(t_stack **b, bool print);
void			ss(t_stack **a, t_stack **b, bool print);
void			ra(t_stack **a, bool print);
void			rb(t_stack **b, bool print);
void			rr(t_stack **a, t_stack **b, bool print);
void			rra(t_stack **a, bool print);
void			rrb(t_stack **b, bool print);
void			rrr(t_stack **a, t_stack **b, bool print);
void			pa(t_stack **a, t_stack **b, bool print);
void			pb(t_stack **b, t_stack **a, bool print);
void			rev_rotate_both(t_stack **a,
					t_stack **b, t_stack *cheapest_node);
void			rotate_both(t_stack **a,
					t_stack **b, t_stack *cheapest_node);

//***Algorithm
void			sort_three(t_stack **a);
void			sort_stacks(t_stack **a, t_stack **b);

#endif
