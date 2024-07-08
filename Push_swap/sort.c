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

#include "push_swap.h"

void    sort_three(t_stack **a)
{
    t_stack *biggest; //Creamos un puntero para apuntar al número más grande

    biggest = find_max(*a);
    if (biggest == *a) //Verificamos que el número mayor esté en la parte superior
        ra(a);          //Si es así, rotamos
    else if ((*a)->next == biggest) //Si nuestro segundo nodo es el más grande, rotamos inversamente, moviendolo al fondo
        rra(a);
    if ((*a)->value > (*a)->next->value) //Ahora que nuestro número más grande está al fondo, verificamos si el primero es mayor que el segundo
        sa(a);  //Si es así, los intercambiamos
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
    current_pos(*a);
    min_on_top(a);
}