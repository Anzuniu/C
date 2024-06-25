#include "../push_swap.h"

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