/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:20:27 by antalvar          #+#    #+#             */
/*   Updated: 2024/07/10 13:54:17 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack *a, t_stack *b)
{
	t_stack	aux;

	if (!a)
		return ;
	aux = *a -> next;
	*a -> next = *b;
	*b = *a;
	*a = aux;
}

void	prep_for_push(t_stack **stack, t_stack *top_node, char stack_name)
{
	while (*stack != top_node)
	{
		if (stack_name == 'a')
		{
			if (top_node -> above_med)
				ra(stack);
			else
				rra(stack);
		}
		else if (stack_name == 'b')
		{
			if (top_node -> above_med)
				rb(stack);
			else
				rrb(stack);
		}
	}
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push(*stack_b, *stack_a);
	ft_printf("pa\n");
}

void	pb(t_stack **stack_b, t_stack **stack_a)
{
	push(*stack_a, *stack_b);
	ft_printf("pb\n");
}
