/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:20:34 by antalvar          #+#    #+#             */
/*   Updated: 2024/05/30 12:20:35 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
/*
static t_stack	*ft_stack_new(int value)    //Creamos los nuevos nodos
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(*new));
    if (!new)
        return (NULL);
	new->value = value;
	new->next = NULL;
	return (new);
}

static void	ft_stack_back(t_stack **lst, t_stack *new)  //Colocamos el nuevo nodo al final del stack
{
    if (!lst)
        return;
	if (*lst)
		(ft_lstlast(*lst))-> next = new;
	else
		*lst = new;
}*/