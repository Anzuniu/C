# include "push_swap.h"

t_stack *create_stack(int argc, char **argv)    //Creamos el stack
{
    t_stack *stack;
    t_stack *new_node;
    t_stack *current;
    int i;

    if (argc < 2)
        return (NULL);
    i = 1;
    stack = ft_lstnew(ft_atoi(argv[i]));
    if (!stack)
        return (NULL);
    current = stack;
    while (i < argc)
    {
        new_node = ft_lstnew(ft_atoi(argv[i]));
        if(!new_node)
            return (NULL);
        ft_lstadd_back(&current, new_node);
        current = current -> next;
        i++;
    }
    return (stack);
}

t_stack	*find_min(t_stack *stack) //Define a function that searches a stack and returns the node with the smallest number
{
	long			min; //To store the smallest value so far
	t_stack	*min_node; //To store a pointer that points to the smallest number

	if (!stack)
		return (NULL);
	min = LONG_MAX; //Assign to the smallest value so far, the max long integer
	while (stack) //Loop until the end of the stack is reached
	{
		if (stack->value < min) //Check if the current node value is smaller than the smallest so far
		{
			min = stack->value; //If so, update the smallest number so far
			min_node = stack; //Set the pointer to point to the node with the smallest number so far
		}
		stack = stack->next; //Move to the next node for processing
	}
	return (min_node); 
}

t_stack	*find_max(t_stack *stack) //Define a function that searches a stack and returns the node with the biggest number
{
	long			max; //To store the biggest value so far
	t_stack	*max_node; //To store a pointer that points to the biggest number

	if (!stack)
		return (NULL);
	max = LONG_MIN; //Assign to the biggest value so far, the max long integer
	while (stack) //Loop until the end of the stack is reached
	{
		if (stack->value > max) //Check if the current node value is smaller than the biggest so far
		{
			max = stack->value; //If so, update the biggest number so far
			max_node = stack; //Set the pointer to point to the node with the biggest number so far
		}
		stack = stack->next; //Move to the next node for processing
	}
	return (max_node);
}

int	stack_len(t_stack *stack) //Define a function that calculates and returns the length of a stack
{
	int	count; //To store the node count

	if (!stack) 
		return (0);
	count = 0;
	while (stack) //Loop until the end of the stack is reached
	{
		stack = stack->next; //Move to the next node
		count++;
	}
	return (count);
}