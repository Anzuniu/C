/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:21:03 by antalvar          #+#    #+#             */
/*   Updated: 2024/07/10 13:52:12 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_reverse(t_stack **stack)
{
	t_stack	*aux;
	t_stack	*last_node;

	if (!(*stack) || !(*stack)->next)
		return ;
	aux = *stack;
	last_node = ft_stacklast(*stack);
	while (aux->next != last_node)
		aux = aux -> next;
	last_node->next = *stack;
	*stack = last_node;
	aux->next = NULL;
}

void	rra(t_stack **stack_a)
{
	rotate_reverse(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_stack **stack_b)
{
	rotate_reverse(stack_b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rotate_reverse(stack_a);
	rotate_reverse(stack_b);
	ft_printf("rrr\n");
}
