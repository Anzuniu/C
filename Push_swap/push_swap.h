#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include <stdio.h>
#include "./libft/libft.h"
#include "./ft_printf/ft_printf.h"

typedef struct	t_stack
{
	int		            value;
    int                 push_cost;
  	int		            pos;
    bool                above_med;
    bool                cheapest;
    struct t_stack      *target_node;
   	struct t_stack	    *next;
    struct t_stack      *prev;
}		            	t_stack;

//Handle errors
int				error_syntax(char *str_n); 
int				error_duplicate(t_stack *a, int n);
void			free_stack(t_stack **stack);
void			free_errors(t_stack **a);

//Stack initiation
t_stack *create_stack(int argc, char **argv);

//Nodes initiation
void			init_nodes_a(t_stack *a, t_stack *b); //To prep all nodes for pushing `a` to `b`
void			init_nodes_b(t_stack *a, t_stack *b); //To prep all nodes for pushing `b` back to `a`
void			current_index(t_stack *stack); //Set the node's current index
void			set_cheapest(t_stack *stack); //Set the stack's cheapest node
t_stack	*get_cheapest(t_stack *stack); //Get the cheapest node of a stack
void			prep_for_push(t_stack **s, t_stack *n, char c); //Prep the required nodes on top for pushing

//Stack utils
int				stack_len(t_stack *stack); //Calculate the length of a stack
t_stack	*find_last(t_stack *stack); //Find the last node of a stack
bool			stack_sorted(t_stack *stack); //To check whether a stack is sorted
t_stack	*find_min(t_stack *stack); //Find the smallest number
t_stack	*find_max(t_stack *stack); //Find the biggest number

//Commands
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void    pb(t_stack **stack_b, t_stack **stack_a);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);

//Algorithms
void			sort_three(t_stack **a);
void			sort_stacks(t_stack **a, t_stack **b); //Turk algorithm

#endif