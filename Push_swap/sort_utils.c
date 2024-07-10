/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:20:19 by antalvar          #+#    #+#             */
/*   Updated: 2024/07/10 14:23:33 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_a_to_b(t_stack **a, t_stack **b)
{
	t_stack	*cheapest_node;

	cheapest_node = get_cheapest(*a);
	if (cheapest_node -> above_med && cheapest_node -> target_node -> above_med)
		rr(a, b);
	else if (!(cheapest_node -> above_med)
		&& !(cheapest_node -> target_node->above_med))
		rrr(a, b);
	prep_for_push(a, cheapest_node, 'a');
	prep_for_push(b, cheapest_node, 'b');
	pb(b, a);
}

void	move_b_to_a(t_stack **a, t_stack **b)
{
	prep_for_push(a, (*b)->target_node, 'a');
	pa(a, b);
}

void	min_on_top(t_stack **a)
{
	while ((*a)->value != find_min(*a)->value)
	{
		if (find_min(*a)->above_med)
			ra(a);
		else
			rra(a);
	}
}

bool	stack_sorted(t_stack *stack)
{
	if (!stack)
		return (1);
	while (stack -> next)
	{
		if (stack -> value > stack -> next -> value)
			return (0);
		stack = stack -> next;
	}
	return (1);
}

t_stack	*get_cheapest(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}
