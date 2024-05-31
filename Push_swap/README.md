<p align="center">
	<a href="#about">About</a> •
	<a href="#mandatory">Mandatory</a> •
	<a href="#bonus">Bonus</a>
</p>

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

(./assets/es.subject.pdf)[`PDF`]

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

Tenemos 2 stacks, A y B. El stack A contiene una cantidad aleatoria de números y B está vacío. Vamos a definir stack.
Un stack es una estructura de datos que sigue el primcipio LIFO (Last In, Fist Out), donde el último elemento en ser añadido es el primero en ser retirado. Las dos operaciones principales son PUSH (insertar un elemento en la parte superior) y POP (eliminar el elemento de la parte superior).
Podríamos establecer una primera estructura así:

...
typedef struct	s_stack
{
	int		value;
 	int		index;
  	int		pos;
   	struct s_stack	*next;
}			s_stack;
...

value: El valor almacenado en el nodo.
index: Un índice que puede ser útil para ciertas operaciones o para mantener un orden específico.
pos: La posición actual del nodo en alguna estructura o arreglo.
next: El puntero al siguiente nodo en la lista, necesario para una estructura de lista enlazada.

Si más adelante necesitamos modificar esta estructura, lo haremos.
