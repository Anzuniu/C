/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:20:12 by antalvar          #+#    #+#             */
/*   Updated: 2024/05/30 12:20:14 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *stack_b;

    stack_b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (0);
	else if (argc == 2) //Si el argumento es solo dos, puede ser que el segundo argumento sea una cadena de números, habría que cortarla
		argv = ft_split(argv[1], ' ');
    stack_a = create_stack(argc, argv + 1); //+1 para empezar por el segundo elemento
    if (!stack_a)
        return (NULL);
    get_pos(stack_a);   //Con esta función establecemos la posición relativa del elemento en todo el conjunto
	if (!stack_sorted(stack_a)) //Si nuestro stack no está ordenado, lo ordenaremos
	{
		if (stack_len(stack_a) == 2) //Si solo tenemos dos valores en el stack a y están desordenados, los cambiamos entre ellos
			sa(stack_a);
		else if (stack_len(stack_a) == 3) //Si solo tenemos tres valores, aplicamos el algoritmo de ordenación para casos de 3 valores
			sort_three(stack_a);
		else	//Si estamos en el caso normal de desorden, aplicamos nuestro algoritmo
			sort_stacks(stack_a, stack_b);
	}
	free_stack(stack_a); //Liberamos nuestro stack
	return (0);
}