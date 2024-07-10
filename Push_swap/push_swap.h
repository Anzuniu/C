#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include <stdio.h>
# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"

typedef struct t_stack
{
	int				value;
	int				push_cost;
	int				pos;
	bool			above_med;
	bool			cheapest;
	struct t_stack	*target_node;
	struct t_stack	*next;
	struct t_stack	*prev;
}	t_stack;

//Handle errors
int		error_syntax(char *str_n);
int		error_duplicate(t_stack *a, int n);
void	free_stack(t_stack **stack);
void	free_errors(t_stack **a);

//Stack initiation
t_stack	*create_stack(int argc, char **argv);

//Nodes initiation
void	init_nodes_a(t_stack *a, t_stack *b);
void	init_nodes_b(t_stack *a, t_stack *b);
void	current_index(t_stack *stack);
void	set_cheapest(t_stack *stack);
t_stack	*get_cheapest(t_stack *stack);
void	prep_for_push(t_stack **s, t_stack *n, char c);
void	set_nodes_a(t_stack *a, t_stack *b);

//Stack utils
int		stack_len(t_stack *stack);
bool	stack_sorted(t_stack *stack);
t_stack	*find_min(t_stack *stack);
t_stack	*find_max(t_stack *stack);
t_stack	*get_cheapest(t_stack *stack);
t_stack	*ft_stacklast(t_stack *stack);
void	current_pos(t_stack *stack);
void	min_on_top(t_stack **a);
t_stack	*ft_stacknew(int value);
void	ft_stackadd_back(t_stack **stack, t_stack *new);

//Commands
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_b, t_stack **stack_a);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);

//Algorithms
void	sort_three(t_stack **a);
void	sort_stacks(t_stack **a, t_stack **b);
void	move_a_to_b(t_stack **a, t_stack **b);

#endif
