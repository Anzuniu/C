## Funciones del Programa

1. int main(int argc, char **argv)
    Propósito: 
        Maneja la inicialización y ejecución principal del programa.
    Descripción:
        Inicializa dos pilas (stack_a y stack_b).
        Divide el argumento si solo hay uno.
        Crea stack_a y verifica su validez.
        Ordena la pila si no está ordenada.
        Libera la pila antes de salir.

2. int error_syntax(char *str_n)
    Propósito: 
        Verifica si una cadena tiene un formato numérico válido.
    Descripción:
        Verifica si los caracteres son dígitos o signos válidos.

3. int error_duplicate(t_stack *a, int n)
    Propósito: 
        Verifica si hay duplicados en la pila a.
    Descripción:
        Recorre la pila a y verifica si n ya existe.

4. void free_stack(t_stack **stack)
    Propósito: 
        Libera la memoria ocupada por una pila.
    Descripción:
        Libera todos los nodos de la pila.

5. void free_errors(t_stack **a)
    Propósito: 
        Maneja la liberación de memoria y la salida en caso de error.
    Descripción:
        Libera la pila y muestra un mensaje de error.

6. static void current_pos(t_stack *stack)
    Propósito: 
        Establece la posición y la mediana en la pila.
    Descripción:
        Asigna la posición relativa y determina si está por encima de la mediana.

7. static void set_target(t_stack *stack_a, t_stack *stack_b)
    Propósito: 
        Establece el nodo objetivo en la pila a basado en b.
    Descripción:
        Busca el nodo en b que sea el mejor objetivo para cada nodo en a.

8. static void cost_a(t_stack *a, t_stack *b)
    Propósito: 
        Calcula el costo de empujar nodos de a a b.
    Descripción:
        Asigna el costo de empujar cada nodo basado en su posición y el nodo objetivo.

9. void set_cheapest(t_stack *stack)
    Propósito: 
        Establece el nodo con el costo más bajo como el más barato.
    Descripción:
        Recorre la pila para encontrar el nodo con el costo más bajo.

10. void init_nodes_a(t_stack *a, t_stack *b)
    Propósito: 
        Inicializa los nodos en la pila a.
    Descripción:
        Configura posiciones, objetivos, costos y el nodo más barato.

11. static void push(t_stack *a, t_stack *b)
    Propósito: 
        Mueve el nodo superior de a a b.
    Descripción:
        Reasigna los punteros para mover el nodo.

12. void prep_for_push(t_stack **stack, t_stack *top_node, char stack_name)
    Propósito: 
        Prepara una pila para empujar un nodo específico.
    Descripción:
        Rota la pila para que top_node esté en la parte superior.

13. void pa(t_stack **stack_a, t_stack **stack_b)
    Propósito: 
        Realiza la operación "push a".
    Descripción:
        Mueve el nodo superior de b a a.

14. void pb(t_stack **stack_b, t_stack **stack_a)
    Propósito: 
        Realiza la operación "push b".
    Descripción:
        Mueve el nodo superior de a a b.

15. static void rotate_reverse(t_stack **stack)
    Propósito: 
        Realiza una rotación inversa en la pila.
    Descripción:
        Mueve el último nodo a la parte superior de la pila.

16. void rra(t_stack **stack_a)
    Propósito: 
        Realiza la operación "reverse rotate a".
    Descripción:
        Llama a rotate_reverse para la pila a.

17. void rrb(t_stack **stack_b)
    Propósito: 
        Realiza la operación "reverse rotate b".
    Descripción:
        Llama a rotate_reverse para la pila b.

18. void rrr(t_stack **stack_a, t_stack **stack_b)
    Propósito: 
        Realiza la operación "reverse rotate a y b".
    Descripción:
        Llama a rotate_reverse para ambas pilas.

19. static void rotate(t_stack **stack)
    Propósito: 
        Realiza una rotación en la pila.
    Descripción:
        Mueve el primer nodo al final de la pila.

20. void ra(t_stack **stack_a)
    Propósito: 
        ealiza la operación "rotate a".
    Descripción:
        Llama a rotate para la pila a.

21. void rb(t_stack **stack_b)
    Propósito: 
        Realiza la operación "rotate b".
    Descripción:
        Llama a rotate para la pila b.

22. void rr(t_stack **stack_a, t_stack **stack_b)
    Propósito: 
        Realiza la operación "rotate a y b".
    Descripción:
        Llama a rotate para ambas pilas.

23. static void move_a_to_b(t_stack **a, t_stack **b)
    Propósito: 
        Mueve el nodo más barato de a a b.
    Descripción:
        Prepara y empuja el nodo más barato de a a b.

24. static void move_b_to_a(t_stack **a, t_stack **b)
    Propósito: 
        Mueve el nodo objetivo de b a a.
    Descripción:
        Prepara y empuja el nodo objetivo de b a a.

25. static void min_on_top(t_stack **a)
    Propósito: 
        Mueve el nodo mínimo a la parte superior de a.
    Descripción:
        Rota a hasta que el nodo mínimo esté en la parte superior.

26. void sort_stacks(t_stack **a, t_stack **b)
    Propósito: 
        Ordena las pilas a y b.
    Descripción:
        Mueve nodos de a a b y los ordena.

27. bool stack_sorted(t_stack *stack)
    Propósito: 
        Verifica si la pila está ordenada.
    Descripción:
        Recorre la pila y verifica el orden.

28. void sort_three(t_stack **a)
    Propósito: 
        Ordena una pila de tres nodos.
    Descripción:
        Ordena a si tiene exactamente tres nodos.

29. t_stack *find_min(t_stack *stack)
    Propósito: 
        Encuentra el nodo con el valor mínimo en la pila.
    Descripción:
        Recorre la pila y devuelve el nodo con el valor más pequeño.

30. t_stack *find_max(t_stack *stack)
    Propósito: 
        Encuentra el nodo con el valor máximo en la pila.
    Descripción:
        Recorre la pila y devuelve el nodo con el valor más grande.

31. t_stack *create_stack(int argc, char **argv)
    Propósito: 
        Crea una pila a partir de los argumentos.
    Descripción:
        Convierte los argumentos en nodos y los enlaza.

32. static t_stack *ft_stack_new(int value)
    Propósito: 
        Crea un nuevo nodo de pila.
    Descripción:
        Asigna y devuelve un nuevo nodo con el valor dado.

33. static void ft_stack_back(t_stack **lst, t_stack *new)
    Propósito: 
        Añade un nodo al final de la pila.
    Descripción:
        Añade new al final de lst.

34. int stack_len(t_stack *stack)
    Propósito: 
        Calcula la longitud de la pila.
    Descripción:
        Cuenta y devuelve el número de nodos en la pila.

35. static void swap(t_stack **stack)
    Propósito: 
        Intercambia los dos primeros nodos de la pila.
    Descripción:
        Intercambia los nodos en la parte superior de la pila.

36. void sa(t_stack **stack_a)
    Propósito: 
        Realiza la operación "swap a".
    Descripción:
        Llama a swap para stack_a.

37. void sb(t_stack **stack_b)
    Propósito: 
        Realiza la operación "swap b".
    Descripción:
        Llama a swap para stack_b.

38. void ss(t_stack **stack_a, t_stack **stack_b)
    Propósito: 
        Realiza la operación "swap a y b".
    Descripción:
        Llama a swap para ambas pilas.

int main(int argc, char **argv);
int error_syntax(char *str_n);
int error_duplicate(t_stack *a, int n);
void free_stack(t_stack **stack);
void free_errors(t_stack **a);
static void current_pos(t_stack *stack);
static void set_target(t_stack *stack_a, t_stack *stack_b);
static void cost_a(t_stack *a, t_stack *b);
void set_cheapest(t_stack *stack);
void init_nodes_a(t_stack *a, t_stack *b);
static void push(t_stack *a, t_stack *b);
void prep_for_push(t_stack **stack, t_stack *top_node, char stack_name);
void pa(t_stack **stack_a, t_stack **stack_b);
void pb(t_stack **stack_b, t_stack **stack_a);
static void rotate_reverse(t_stack **stack);
void rra(t_stack **stack_a);
void rrb(t_stack **stack_b);
void rrr(t_stack **stack_a, t_stack **stack_b);
static void rotate(t_stack **stack);
void ra(t_stack **stack_a);
void rb(t_stack **stack_b);
void rr(t_stack **stack_a, t_stack **stack_b);
static void move_a_to_b(t_stack **a, t_stack **b);
static void move_b_to_a(t_stack **a, t_stack **b);
static void min_on_top(t_stack **a);
void sort_stacks(t_stack **a, t_stack **b);
bool stack_sorted(t_stack *stack);
void sort_three(t_stack **a);
t_stack *find_min(t_stack *stack);
t_stack *find_max(t_stack *stack);
t_stack *create_stack(int argc, char **argv);
static t_stack *ft_stack_new(int value);
static void ft_stack_back(t_stack **lst, t_stack *new);
int stack_len(t_stack *stack);
static void swap(t_stack **stack);
void sa(t_stack **stack_a);
void sb(t_stack **stack_b);
void ss(t_stack **stack_a, t_stack **stack_b);
