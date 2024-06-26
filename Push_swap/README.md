### Índice
- <a href="#about">About</a> 

- <a href="#mandatory">Mandatory</a>

- <a href="#bonus">Bonus</a> 

- <a href="#desarrollo">Desarrollo</a>


## About
Este proyecto te hará ordenar datos en un *stack*, con un conjunto limitado de
*instrucciones*, y utilizando el menor número de instrucciones. Para tener éxito, deberás
trastear con algunos de los diversos algoritmos y elegir, entre todos, el más apropiado
para un ordenamiento óptimo.

Push_swap es un proyecto de algoritmia simple y muy efectivo: tienes que ordenar
datos. Tienes a tu disposición un conjunto de valores int, dos stacks y un conjunto de
instrucciones para manipular ambos.

¿Que cuál es el objetivo? Simple: escribirás un programa en C al que llamarás push_swap.
El programa calculará y mostrará en la salida estándar una lista de instrucciones escritas
en lenguaje push_swap. Deberás buscar el número mínimo de instrucciones para ordenar
el conjunto de enteros recibido como argumento.

¿A que es fácil? Bueno, eso ya lo veremos...

## Mandatory
<table>
  <tr>
    <th>Nombre del programa</th>
    <td><i>push_swap</i></td>
  </tr>
  <tr>
    <th>Archivos a entregar</th>
    <td>Makefile, <code>*.h</code>, <code>*.c</code></td>
  </tr>
  <tr>
    <th>Makefile</th>
    <td><i>NAME</i>, <i>all</i>, <i>clean</i>, <i>fclean</i>, <i>re</i>, <i>bonus</i></td>
  </tr>
  <tr>
    <th>Elementos autorizados</th>
    <td><code>write()</code>, <code>read()</code>, <code>malloc()</code>, <code>free()</code>, <code>exit()</code></td>
  </tr>
  <tr>
    <th>¿Libft permitido?</th>
    <td>Sí</td>
  </tr>
  <tr>
    <th>Descripción</th>
    <td>ordenar los números del stack a en orden ascendente.</td>
  </tr>
</table>

### Operaciones
para ordenar los numeros solo podremos usar las siguientes operaciones:
<table>
	<tr>
		<th>sa</th>
		<td>intercambia los dos primeros elementos encima del stack a. No hace nada si hay uno o menos elementos.</td>
	</tr>
	<tr>
		<th>sb</th>
		<td>intercambia los dos primeros elementos encima del stack b. No hace nada si hay uno o menos elementos.</td>
	</tr>
	<tr>
		<th>ss</th>
		<td><code>sa</code> y <code>sb</code> a la vez.</td>
	</tr>
	<tr>
		<th>pa</th>
		<td>toma el primer elemento del stack b y lo pone encima del stack a. No hace nada si b está vacío.</td>
	</tr>
	<tr>
		<th>pb</th>
		<td> push b - toma el primer elemento del stack a y lo pone encima del stack b. No hace nada si a está vacío.</td>
	</tr>
	<tr>
		<th>ra</th>
		<td> desplaza hacia arriba todos los elementos del stack a una posición, de forma que el primer elemento se convierte en el último.</td>
	</tr>
	<tr>
		<th>rb</th>
		<td> desplaza hacia arriba todos los elementos del stack b una posición, de forma que el primer elemento se convierte en el último.</td>
	</tr>
	<tr>
		<th>rr</th>
		<td><code>ra</code> y <code>rb</code> a la vez.</td>
	</tr>
	<tr>
		<th>rra</th>
		<td>desplaza hacia abajo todos los elementos del stack a una posición, de forma que el último elemento se convierte en el primero.</td>
	</tr>
	<tr>
		<th>rrb</th>
		<td> desplaza hacia abajo todos los elementos del stack b una posición, de forma que el último elemento se convierte en el primero.</td>
	</tr>
	<tr>
		<th>rrr</th>
		<td><code>rra</code> y <code>rrb</code> a la vez.</td>
	</tr>
</table>

### Reglas
- Debes escribir un programa llamado push_swap que recibirá como argumento el stack a con el formato de una lista de enteros. El primer argumento debe ser el que esté encima del stack (cuidado con el orden).
- El programa debe mostrar la lista de instrucciones (más corta posible) para ordenar el stack a, de menor a mayor donde el menor se sitúe en la cima del stack.
- Las instrucciones deben separarse utilizando un “\n” y nada más.
- El objetivo es ordenar el stack con el mínimo número de operaciones posible. Durante la evaluación compararemos el número de instrucciones obtenido por tu programa con un rango de instrucciones máximo.
- Tu programa no recibirá puntos tanto si tu programa muestra una lista demasiado larga como si el resultado no es correcto.
- Si no se especifican parámetros, el programa no deberá mostrar nada y deberá devolver el control al usuario.
- En caso de error, deberás mostrar Error seguido de un “\n” en la salida de errores estándar. Algunos de los posibles errores son: argumentos que no son enteros,argumentos superiores a un int, y/o encontrar números duplicados.

## Bonus
Tus bonus serán evaluados exclusivamente si la parte obligatoria es EXCELENTE.
Esto quiere decir, evidentemente, que debes completar la parte obligatoria, de principio
a fin, y que tu gestión de errores debe ser impecable aunque el programa se utilice
incorrectamente. De no ser así, esta parte será IGNORADA.
¿Te animas a hacerte tu propio checker? ¡Suena interesante!

### Reglas del bonus
- Escribe un programa llamado checker, que tomará como argumento el stack a formateado como una lista de enteros. El primer argumento debe estar encima del stack (cuidado con el orden). Si no se da argumento, checker termina y no muestra nada.
- Durante la ejecución de checker se esperará y leerá una lista de instrucciones, separadas utilizando ’\n’. Cuando todas las instrucciones se hayan leído, checker las ejecutará utilizando el stack recibido como argumento.
- Tras ejecutar todas las instrucciones, el stack a deberá estar ordenado y el stack b deberá estar vacío. Si es así, checker imprimirá “OK” seguido de un ’\n’ en el stdout. De no ser así, mostrará “KO” seguido de un ’\n’ en el stdout.
- En caso de error, deberás mostrar Error seguido de un ’\n’ en la stderr. Los errores son:
  - Algunos o todos los argumentos no son enteros.
  - Algunos o todos los argumentos son más grandes que un int.
  - Hay uno o varios números duplicados.
  - Una instrucción no existe y/o no está bien formateada.
 
## Desarrollo

Comenzaremos con toda la fase de desarrollo del programa. He de añadir que esto no es un tutorial por lo que probablemente seguir esto paso a paso pueda ser contraproducente, pero voy a ir escribiendo las distintas fases de desarrollo que voy a afrontar, aunque posteriormente sean corregidas por otros métodos mas efectivos.

Tenemos 2 stacks, A y B. El stack A contiene una cantidad aleatoria de números y B está vacío. Vamos a definir stack.
Un stack es una estructura de datos que sigue el primcipio LIFO (Last In, Fist Out), donde el último elemento en ser añadido es el primero en ser retirado. Las dos operaciones principales son PUSH (insertar un elemento en la parte superior) y POP (eliminar el elemento de la parte superior).
Podríamos establecer una primera estructura así:

**Primera estructura para Stack**
```c
typedef struct	s_stack
{
	int		value;
 	int		index;
  	int		pos;
   	struct s_stack	*next;
}			s_stack;
```

- `value`: El valor almacenado en el nodo.
- `index`: Un índice que puede ser útil para ciertas operaciones o para mantener un orden específico.
- `pos`: La posición actual del nodo en alguna estructura o arreglo.
- `next`: El puntero al siguiente nodo en la lista, necesario para una estructura de lista enlazada.

**Actual estructura para Stack**

He sustituido `index` por `target_pod` y he añadido dos variables para el coste que supondría realizar las operaciones.

```c
typedef struct	s_stack
{
	int		value;
  	int		pos;
	int		target_pos;
	int		cost_a;
	int		cost_b;
   	struct s_stack	*next;
}			s_stack;
```

- `value`: El valor almacenado en el nodo.
- `pos`: La posición actual del nodo en alguna estructura o arreglo.
- `target_pos`: La posición actual del nodo objetivo en el otro stack.
- `next`: El puntero al siguiente nodo en la lista, necesario para una estructura de lista enlazada.
- `cost_a`: Cantidad de operaciones necesarias para colocar este nodo en el top del stack a.
- `cost_b`: Cantidad de operaciones necesarias para colocar este nodo en el top del stack b.

Si más adelante necesitamos modificar esta estructura, lo haremos.

### Operaciones

Voy a comenzar por lo que considero más sencillo, programar las operaciones.

### [Swap](./s.c)
<table>
	<tr>
		<th>sa</th>
		<td>intercambia los dos primeros elementos encima del stack a. No hace nada si hay uno o menos elementos.</td>
	</tr>
	<tr>
		<th>sb</th>
		<td>intercambia los dos primeros elementos encima del stack b. No hace nada si hay uno o menos elementos.</td>
	</tr>
	<tr>
		<th>ss</th>
		<td><code>sa</code> y <code>sb</code> a la vez.</td>
	</tr>
</table>

Para realizar esto necesitaremos desarrollar un swap entre dos listas distintas, A y B. Como vamos a necesitar 3 funciones(sa, sb y ss) podemos desarrollarlas en el mismo archivo. Desarrollamos el código de swap:

Vamos a desarrollar el código de la siguiente forma:
- Una función `swap` que nos haga el swap entre el primer nodo de una lista y el segundo.
- Una función `sa` que llame a la función `swap` con el stack `a`
- Una función `sb` que llame a la función `swap` con el stack `b`
- Una función `ss` que llame a la función `swap` con los dos stacks.
  
```c
void	swap(t_stack *stack)
{
	t_stack	*first;
	t_stack	*second;

	if (!stack || stack -> next == NULL)
		return (stack);
	first = stack;
	second = stack -> next;
	first -> next = second -> next;
	second -> next = first;
}
```
- Creamos dos variables para establecer las posiciones 1 y 2 de nuestro stack. 
- Hacemos un checkeo para ver si tenemos stack o es NULL. 
- Una vez hecho esto, iniciamos nuestro valor de `first` con el valor de nuestro stack y nuestro `second` con el valor del nodo al que apunta nuestro primer nodo de stack, que es el segundo.
- Hacemos que el componente `next` de nuestro nodo `first` apunte al mismo nodo que apunta `second`.
- Ahora hacemos que el componente `next` de nuestro nodo `second` apunte a `first`.

Una vez hecha nuestra función `swap` simplemente tenemos que aplicarlas con nuestras listas, de forma que tendríamos el siguiente código:

```c
static void     swap(t_list lst)
{
        t_list  *first;
        t_list  *second;

        if (!lst || lst -> next == NULL)
                return (lst);
        first = lst;
        second = lst -> next;
        first -> next = second -> next;
        second -> next = first;
}

void    sa(t_list **stack_a)
{
        swap(stack_a);
        write(1, "sa\n", 3);
}

void    sb(t_list **stack_b)
{
        swap(stack_b);
        write(1, "sb\n", 3);
}

void    ss(t_list **stack_a, t_list **stack_b)
{
        swap(stack_a);
        swap(stack_b);
        write(1, "ss\n", 3);
}
```

Mantenemos la función `swap` en static porque no la vamos a necesitar fuera de este archivo ya que solo la llamamos aquí.
Con esto ya hemos completado esta operación.

<p align="center">
	<table>
		<tr><th>sa</th><td>:heavy_check_mark:</td></tr>
		<tr><th>sb</th><td>:heavy_check_mark:</td></tr>
		<tr><th>ss</th><td>:heavy_check_mark:</td></tr>
		<tr><th>pa</th><td></td></tr>
		<tr><th>pb</th><td></td></tr>
		<tr><th>ra</th><td></td></tr>
		<tr><th>rb</th><td></td></tr>
		<tr><th>rr</th><td></td></tr>
		<tr><th>rra</th><td></td></tr>
		<tr><th>rrb</th><td></td></tr>
		<tr><th>rrr</th><td></td></tr>
	</table>
</p>

### [Push](./p.c)

<table>
	<tr>
		<th>pa</th>
		<td>toma el primer elemento del stack b y lo pone encima del stack a. No hace nada si b está vacío.</td>
	</tr>
	<tr>
		<th>pb</th>
		<td> push b - toma el primer elemento del stack a y lo pone encima del stack b. No hace nada si a está vacío.</td>
	</tr>
</table>

Estas operaciones hacen un push de un stack a otro, de forma que el primer elemento de un stack pasa a ser el primer elemento del otro stack. Teniendo esto en cuenta, podemos hacer lo mismo que en el anterior caso, una función static llamada push y después hacemos las llamadas a las funciones de cada stack.

```c
void	push(t_stack *a, t_stack *b)
{
	t_stack aux;

	if (!*a)                
		return ;
	aux = *a -> next;
	*a -> next = *b;
	*b = *a;
	*a = aux;
}
```

- Si estamos pasando de "a" a "b", chequeamos que tenemos algo que pasar
- Guardamos el contenido next de "a" en "aux"
- Hacemos que "a" apunte al primer contenido de "b", posicionandolo el primero
- Hacemos que el primer contenido de "b" ahora sea "a"
- Y el nuevo "a" es "aux", el que apuntaba el primer nodo de "a"

  Ahora creamos las funciones `pa` y `pb`

  ```c
  static void     push(t_stack *a, t_stack *b)
  {
        t_stack aux;

        if (!*a)
                return ;
        aux = *a -> next;
        *a -> next = *b;
        *b = *a;
        *a = aux;
  }

  void    pa(t_stack **stack_a, t_stack **stack_b)
  {
        push(stack_b, stack_a);
        write(1, "pa\n", 3);
  }

  void    pb(t_stack **stack_b, t_stack **stack_a)
  {
        push(stack_a, stack_b);
        write(1, "pb\n", 3);
  }
  ```

  <p align="center">
	<table>
		<tr><th>sa</th><td>:heavy_check_mark:</td></tr>
		<tr><th>sb</th><td>:heavy_check_mark:</td></tr>
		<tr><th>ss</th><td>:heavy_check_mark:</td></tr>
		<tr><th>pa</th><td>:heavy_check_mark:</td></tr>
		<tr><th>pb</th><td>:heavy_check_mark:</td></tr>
		<tr><th>ra</th><td></td></tr>
		<tr><th>rb</th><td></td></tr>
		<tr><th>rr</th><td></td></tr>
		<tr><th>rra</th><td></td></tr>
		<tr><th>rrb</th><td></td></tr>
		<tr><th>rrr</th><td></td></tr>
	</table>
</p>

### [Rotate](./r.c)

<table>
	<tr>
		<th>ra</th>
		<td> desplaza hacia arriba todos los elementos del stack a una posición, de forma que el primer elemento se convierte en el último.</td>
	</tr>
	<tr>
		<th>rb</th>
		<td> desplaza hacia arriba todos los elementos del stack b una posición, de forma que el primer elemento se convierte en el último.</td>
	</tr>
	<tr>
		<th>rr</th>
		<td><code>ra</code> y <code>rb</code> a la vez.</td>
	</tr>
</table>

Estas operaciones hacen que el último elemento de un stack pase a ser el primer elemento del mismo stack. Teniendo esto en cuenta, podemos hacer lo mismo que en el caso anterior, con una función estática llamada `rotate_reverse` y después hacemos las llamadas a las funciones de cada stack.

```c
void rotate_reverse(t_stack **stack) 
{
    t_stack *aux;
    t_stack *last_node;

    if (!(*stack) || !(*stack)->next)		
		return ;

    aux = *stack;
    last_node = ft_lstlast(*stack);
    last_node->next = *stack;
    *stack = last_node;
    aux->next = NULL;
}
```
- Si queremos rotar el stack de forma inversa, chequeamos si tenemos más de un nodo en la lista.
- Guardamos el primer nodo en aux.
- Obtenemos el último nodo de la lista.
- Hacemos que el último nodo apunte al primer nodo, estableciendo así un bucle circular.
- Establecemos el primer nodo como el último nodo.
- Establecemos el siguiente puntero del antiguo último nodo (ahora el penúltimo) como NULL, rompiendo así el bucle.

Ahora podemos crear las funciones rra y rrb para rotar inversamente los stacks.

```c
static void rotate_reverse(t_stack **stack) 
{
    t_stack *aux;
    t_stack *last_node;

    if (!(*stack) || !(*stack)->next)		
		return ;

    aux = *stack;
    last_node = ft_lstlast(*stack);
    last_node->next = *stack;
    *stack = last_node;
    aux->next = NULL;
}

void	rra(t_stack **stack)
{
    rotate_reverse(stack);
    write(1, "rra\n", 4);
}

void	rrb(t_stack **stack)
{
    rotate_reverse(stack);
    write(1, "rrb\n", 4);
}
```

  <p align="center">
	<table>
		<tr><th>sa</th><td>:heavy_check_mark:</td></tr>
		<tr><th>sb</th><td>:heavy_check_mark:</td></tr>
		<tr><th>ss</th><td>:heavy_check_mark:</td></tr>
		<tr><th>pa</th><td>:heavy_check_mark:</td></tr>
		<tr><th>pb</th><td>:heavy_check_mark:</td></tr>
		<tr><th>ra</th><td>:heavy_check_mark:</td></tr>
		<tr><th>rb</th><td>:heavy_check_mark:</td></tr>
		<tr><th>rr</th><td>:heavy_check_mark:</td></tr>
		<tr><th>rra</th><td></td></tr>
		<tr><th>rrb</th><td></td></tr>
		<tr><th>rrr</th><td></td></tr>
	</table>
</p>

### [Reverse Rotate](./r.c)

Estas operaciones hacen que el último elemento de un stack pase a ser el primer elemento del mismo stack. Teniendo esto en cuenta, podemos hacer lo mismo que en el caso anterior, con una función estática llamada `rotate_reverse` y después hacemos las llamadas a las funciones de cada stack.

```c
void rotate_reverse(t_stack **stack) 
{
    t_stack *aux;
    t_stack *last_node;

    if (!(*stack) || !(*stack)->next)		
		return ;

    aux = *stack;
    last_node = ft_lstlast(*stack);
    last_node->next = *stack;
    *stack = last_node;
    aux->next = NULL;
}
```

- Si queremos rotar el stack de forma inversa:
- Chequeamos si tenemos más de un nodo en la lista.
- Guardamos el primer nodo en aux.
- Obtenemos el último nodo de la lista.
- Hacemos que el último nodo apunte al primer nodo, estableciendo así un bucle circular.
- Establecemos el primer nodo como el último nodo.
- Establecemos el siguiente puntero del antiguo último nodo (ahora el penúltimo) como NULL, rompiendo así el bucle.

Ahora podemos crear las funciones rra y rrb para rotar inversamente los stacks.

```c
static void rotate_reverse(t_stack **stack) 
{
    t_stack *aux;
    t_stack *last_node;

    if (!(*stack) || !(*stack)->next)		
		return ;

    aux = *stack;
    last_node = ft_lstlast(*stack);
    last_node->next = *stack;
    *stack = last_node;
    aux->next = NULL;
}

void	rra(t_stack **stack)
{
    rotate_reverse(stack);
    write(1, "rra\n", 4);
}

void	rrb(t_stack **stack)
{
    rotate_reverse(stack);
    write(1, "rrb\n", 4);
}
```

  <p align="center">
	<table>
		<tr><th>sa</th><td>:heavy_check_mark:</td></tr>
		<tr><th>sb</th><td>:heavy_check_mark:</td></tr>
		<tr><th>ss</th><td>:heavy_check_mark:</td></tr>
		<tr><th>pa</th><td>:heavy_check_mark:</td></tr>
		<tr><th>pb</th><td>:heavy_check_mark:</td></tr>
		<tr><th>ra</th><td>:heavy_check_mark:</td></tr>
		<tr><th>rb</th><td>:heavy_check_mark:</td></tr>
		<tr><th>rr</th><td>:heavy_check_mark:</td></tr>
		<tr><th>rra</th><td>:heavy_check_mark:</td></tr>
		<tr><th>rrb</th><td>:heavy_check_mark:</td></tr>
		<tr><th>rrr</th><td>:heavy_check_mark:</td></tr>
	</table>
</p>

### [Algorítmos de ordenación](https://www.geeksforgeeks.org/sorting-algorithms/)

Tenemos que elegir un algorítmo de ordenación que implementar. Aquí hay una lista con unos cuantos entre los que elegir:

- [Bubble Sort](https://www.geeksforgeeks.org/bubble-sort/)
- [Selection Sort](https://www.geeksforgeeks.org/selection-sort/)
- [Insertion Sort](https://www.geeksforgeeks.org/selection-sort/)
- [Merge Sort](https://www.geeksforgeeks.org/selection-sort/)
- [Quick Sort](https://www.geeksforgeeks.org/quick-sort/)
	Muy buenos con muchos datos
- [Heap Sort](https://www.geeksforgeeks.org/selection-sort/)
- [Counting Sort](https://www.geeksforgeeks.org/counting-sort/)
- [Radix Sort](https://www.geeksforgeeks.org/radix-sort/)
- [Bucket Sort](https://www.geeksforgeeks.org/bucket-sort-2/)
- [Bingo Sort](https://www.geeksforgeeks.org/bingo-sort-algorithm/)
- [ShellSort](https://www.geeksforgeeks.org/shellsort/)
- [TimSort](https://www.geeksforgeeks.org/timsort/)
- [Comb Sort](https://www.geeksforgeeks.org/comb-sort/)
- [Pigeonhole Sort](https://www.geeksforgeeks.org/pigeonhole-sort/)
- [Cycle Sort](https://www.geeksforgeeks.org/cycle-sort/)
- [Cocktail Sort](https://www.geeksforgeeks.org/cocktail-sort/)
- [Strand Sort](https://www.geeksforgeeks.org/strand-sort/)
- [Bitonic Sort](https://www.geeksforgeeks.org/bitonic-sort/)
- [Pancake Sort](https://www.geeksforgeeks.org/pancake-sorting/)
- [BogoSort](https://www.geeksforgeeks.org/bogosort-permutation-sort/)
- [Gnomo Sort](https://www.geeksforgeeks.org/gnome-sort-a-stupid-one/)
- [Sleep Sort](https://www.geeksforgeeks.org/sleep-sort-king-laziness-sorting-sleeping/)
- [Stooge Sort](https://www.geeksforgeeks.org/stooge-sort/)
- [Tag Sort](https://www.geeksforgeeks.org/tag-sort/)
- [Tree Sort](https://www.geeksforgeeks.org/tree-sort/)
- [Odd-Even Sort/Brick Sort](https://www.geeksforgeeks.org/odd-even-sort-brick-sort/)
- [3-way Merge Sort](https://www.geeksforgeeks.org/3-way-merge-sort/)
