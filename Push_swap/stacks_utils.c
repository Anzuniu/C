#include "push_swap.h"

t_stack	*ft_stacknew(int value)
{
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
}

void	ft_stackadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*last;

	if (!stack || !new)
		return ;
	if (!*stack)
	{
		*stack = new;
	}
	else
	{
		last = ft_stacklast(*stack);
		last->next = new;
	}
}

t_stack	*create_stack(int argc, char **argv)
{
	t_stack	*stack;
	t_stack	*new_node;
	t_stack	*current;
	int		i;

	if (argc < 2)
		return (NULL);
	i = 1;
	stack = ft_stacknew(ft_atoi(argv[i]));
	if (!stack)
		return (NULL);
	current = stack;
	while (i < argc)
	{
		new_node = ft_stacknew(ft_atoi(argv[i]));
		if (!new_node)
			return (NULL);
		ft_stackadd_back(&current, new_node);
		current = current -> next;
		i++;
	}
	return (stack);
}

t_stack	*find_min(t_stack *stack)
{
	long	min;
	t_stack	*min_node;

	if (!stack)
		return (NULL);
	min = LONG_MAX;
	while (stack)
	{
		if (stack->value < min)
		{
			min = stack->value;
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}

t_stack	*find_max(t_stack *stack)
{
	long	max;
	t_stack	*max_node;

	if (!stack)
		return (NULL);
	max = LONG_MIN;
	while (stack)
	{
		if (stack->value > max)
		{
			max = stack->value;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}

t_stack	*ft_stacklast(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack -> next;
	return (stack);
}

int	stack_len(t_stack *stack)
{
	int	count;

	if (!stack)
		return (0);
	count = 0;
	while (stack)
	{
		stack = stack->next;
		count++;
	}
	return (count);
}
