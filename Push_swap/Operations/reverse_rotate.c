/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:21:03 by antalvar          #+#    #+#             */
/*   Updated: 2024/05/30 12:21:05 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../push_swap.h"

static void rotate_reverse(t_stack **stack) 
{
    t_stack *aux;
    t_stack *last_node;

    if (!(*stack) || !(*stack)->next)		
		return ;

    aux = *stack; // Guardamos el primero
    last_node = ft_lstlast(stack);
    while (aux->next != last_node)
        aux = aux -> next;          //Avanzamos aux hasta el penúltimo elemento
    last_node->next = *stack; // El último apunta al primero
    *stack = last_node; // El nuevo primer elemento es el último
    aux->next = NULL; // El penúltimo elemento ya no apunta a nada
}

void	rra(t_stack **stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_stack **stack_b)
{
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr\n");
}


