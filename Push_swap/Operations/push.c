/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:20:27 by antalvar          #+#    #+#             */
/*   Updated: 2024/05/31 15:40:30 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push(t_stack *a, t_stack *b)
{
	t_stack	aux;
	
	if (!a)		//Si estamos pasando de "a" a "b", chequeamos que tenemos algo que pasar
		return ;
	aux = *a -> next;	//Guardamos el contenido next de "a" en "aux"
	*a -> next = *b;	//Hacemos que "a" apunte al primer contenido de "b", posicionandolo el primero
	*b = *a;		//Hacemos que el primer contenido de "b" ahora sea "a"
	*a = aux;		//Y el nuevo "a" es "aux", el que apuntaba el primer nodo de "a"
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
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

void    pb(t_stack **stack_b, t_stack **stack_a)
{
    push(stack_a, stack_b);
	ft_printf("pb\n");
}
