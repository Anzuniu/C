/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_nodes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:21:07 by antalvar          #+#    #+#             */
/*   Updated: 2024/07/10 14:03:33 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	current_pos(t_stack *stack)
{
	int		i;
	int		median;

	if (!stack)
		return ;
	median = stack_len(stack) / 2;
	i = 0;
	while (stack)
	{
		stack->pos = 1;
		if (i <= median)
			stack -> above_med = true;
		else
			stack -> above_med = false;
		stack = stack->next;
		++i;
	}
}

static void	set_target(t_stack *stack_a, t_stack *stack_b)
{
	t_stack	*current_b;
	t_stack	*target;
	long	match_pos;

	while (stack_a)
	{
		match_pos = LONG_MIN;
		current_b = stack_b;
		while (current_b)
		{
			if (current_b -> value < stack_a -> value
				&& current_b -> value > match_pos)
			{
				match_pos = current_b -> value;
				target = current_b;
			}
			current_b = current_b -> next;
		}
		if (match_pos == LONG_MIN)
			stack_a -> target_node = find_max(stack_b);
		else
			stack_a -> target_node = target;
		stack_a = stack_a -> next;
	}
}

static void	cost_a(t_stack *a, t_stack *b)
{
	int	len_a;
	int	len_b;

	len_a = stack_len(a);
	len_b = stack_len(b);
	while (a)
	{
		a -> push_cost = a -> pos;
		if (!(a->above_med))
			a->push_cost = len_a - (a->pos);
		if (a->target_node -> above_med)
			a->push_cost += a -> target_node -> pos;
		else
			a -> push_cost += len_b - (a->target_node->pos);
		a = a->next;
	}
}

void	set_cheapest(t_stack *stack)
{
	long	cheapest_value;
	t_stack	*cheapest_node;

	if (!stack)
		return ;
	cheapest_value = LONG_MAX;
	while (stack)
	{
		if (stack->push_cost < cheapest_value)
		{
			cheapest_value = stack->push_cost;
			cheapest_node = stack;
		}
		stack = stack->next;
	}
	cheapest_node -> cheapest = true;
}

void	set_nodes_a(t_stack *a, t_stack *b)
{
	current_pos(a);
	current_pos(b);
	set_target(a, b);
	cost_a(a, b);
	set_cheapest(a);
}
