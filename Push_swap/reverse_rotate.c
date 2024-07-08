/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:21:03 by antalvar          #+#    #+#             */
/*   Updated: 2024/05/30 12:21:05 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void rotate_reverse(t_stack **stack) 
{
    t_stack *aux;
    t_stack *last_node;

    if (!(*stack) || !(*stack)->next)		
		return ;

    aux = *stack; // Guardamos el primero
    last_node = ft_stacklast(*stack);
    while (aux->next != last_node)
        aux = aux -> next;          //Avanzamos aux hasta el penúltimo elemento
    last_node->next = *stack; // El último apunta al primero
    *stack = last_node; // El nuevo primer elemento es el último
    aux->next = NULL; // El penúltimo elemento ya no apunta a nada
}

void	rra(t_stack **stack_a)
{
	rotate_reverse(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **stack_b)
{
	rotate_reverse(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rotate_reverse(stack_a);
	rotate_reverse(stack_b);
	write(1, "rrr\n", 4);
}


