/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:20:19 by antalvar          #+#    #+#             */
/*   Updated: 2024/05/30 12:20:21 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void move_a_to_b(t_stack **a, t_stack **b)
{
    t_stack *cheapest_node;

    cheapest_node = get_cheapest(*a);
    if (cheapest_node -> above_med && cheapest_node -> target_node -> above_med)
        rr(a,b);
    else if (!(cheapest_node -> above_med ) && !(cheapest_node -> target_node->above_med))
        rrr(a,b);
    prep_for_push(a, cheapest_node, 'a');
    prep_for_push(b, cheapest_node, 'b');
    pb(b, a);
}

static void move_b_to_a(t_stack **a, t_stack **b)
{
    prep_for_push(a, (*b) -> target_node, 'a');
    pa(a,b);
}

static void min_on_top(t_stack **a)
{
    while ((*a)->value != find_min(*a)->value)
    {
        if (find_min(*a)->above_med)
            ra(a);
        else
            rra(a);
    }
}

bool    stack_sorted(t_stack *stack)
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

void    sort_stacks(t_stack **a, t_stack **b)
{
    int len_a;

    len_a = stack_len(*a);
    if (len_a-- > 3 && !stack_sorted(*a)) // Verificamos si nuestro stack tiene más de 3 nodos, si es así lo pasamos a b y por lo tanto el tamaño del stack a es de uno menos
        pb(b, a);
    if (len_a-- > 3 && !stack_sorted(*a)) // Volvemos a repetir el proceso, porque necesitamos 2 nodos en el stack b para comenzar
        pb(b, a);
    while (len_a-- > 3 && !stack_sorted(*a)) //Mientras tengamos más de 3 nodos y estén desordenados
    {
        set_nodes_a(*a, *b);
        move_a_to_b(a, b);
    }
    sort_three(a);
    while(*b)
    {
        set_nodes_a(*b, *a);
        move_a_to_b(b, a);
    }
    get_pos(*a);
    min_on_top(a);
}