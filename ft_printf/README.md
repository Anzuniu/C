<div align="center">
  <img src=".assets/FT_PRINT.png">
</div>

<p align="center">
	<a href="#about">About</a> •
	<a href="#mandatory">Mandatory</a> •
	<a href="#bonus">Bonus</a>
</p>

## About

El objetivo de este proyecto es bastante sencillo. Deberás reprogramar printf(). Aprenderás, principalmente, a utilizar un número variable de argumentos.

[Click aquí](./assets/es.subject.pdf) para ver el `PDF` del proyecto.


## Mandatory

<table>
  <tr>
    <th>Nombre del programa</th>
    <td>libftprintf.a</td>
</tr>
<tr>
    <td><strong>Prototipo</strong></td>
    <td>int ft_printf(char const *, ...);</td>
  </tr>
  <tr>
    <th>Archivos a entregar</th>
    <td>Makefile, <code>*.h</code>, <code>*/*.h</code>, <code>*.c</code>, <code>*/*.c</code></td>
  </tr>
  <tr>
    <th>Makefile</th>
    <td><i>NAME</i>, <i>all</i>, <i>clean</i>, <i>fclean</i>, <i>re</i></td>
  </tr>
  <tr>
    <th>Elementos autorizados</th>
    <td><code>write()</code>, <code>malloc()</code>, <code>free()</code>, <code>va_start</code>, <code>va_arg</code>, <code>va_copy</code>, <code>va_ends</code></td>
  </tr>
  <tr>
    <th>¿Libft permitido?</th>
    <td>Sí</td>
  </tr>
  <tr>
    <th>Descripción</th>
    <td>Escribe una librería que contenga la función <code>ft_printf()</code> que reproduzca la función <code>printf()</code> original.</td>
  </tr>
</table>

### Requisitos

- No implementes la gestión del buffer del `printf()` original.
- Deberás implementar las siguientes conversiones: `cspdiuxX%`.
- Tu función se comparará con el `printf()` original.
- Tienes que usar el comando ar para crear tu librería (libtool está prohibido).
- Tu archivo `libftprintf.a` deberá ser creado en la raiz de tu repositorio.

Tienes que implementar las siguientes conversiones:

<table>
  <tr>
    <th>Conversión</th>
    <th>Acción</th>
  </tr>
  <tr>
    <td><code>%c</code></td>
    <td>Imprime un solo carácter.</td>
  </tr>
  <tr>
    <td><code>%s</code></td>
    <td>Imprime un string (como se define por defecto en C).</td>
  </tr>
  <tr>
    <td><code>%p</code></td>
    <td>Imprime un puntero <code>void *</code> en formato hexadecimal.</td>
  </tr>
  <tr>
    <td><code>%d</code></td>
    <td>Imprime un número decimal (base 10).</td>
  </tr>
  <tr>
    <td><code>%i</code></td>
    <td>Imprime un número entero en base 10.</td>
  </tr>
  <tr>
    <td><code>%u</code></td>
    <td>Imprime un número decimal (base 10) sin signo.</td>
  </tr>
  <tr>
    <td><code>%x</code></td>
    <td>Imprime un número hexadecimal (base 16) en minúsculas.</td>
  </tr>
  <tr>
    <td><code>%X</code></td>
    <td>Imprime un número hexadecimal (base 16) en mayúsculas.</td>
  </tr>
  <tr>
    <td><code>%%</code></td>
    <td>Imprime el símbolo del porcentaje.</td>
  </tr>
</table>

## Bonus

No es necesario hacer todos los bonus.

- Gestiona cualquier combinación de los siguientes flags: `-`, `0` y `.` y el ancho mínimo (_field minimum width_) bajo todas las conversiones posibles.
- Gestiona todos los siguientes flags: `#`, ` ` y `+`.
