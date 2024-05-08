/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:12:12 by antalvar          #+#    #+#             */
/*   Updated: 2024/05/08 01:38:37 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(const char *str, va_list args);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		printed_chars;

	i = 0;
	printed_chars = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			printed_chars += ft_check_format(&format[++i], args);
			i++;
		}
		else
			printed_chars += ft_putchar(format[i++]);
	}
	va_end(args);
	return (printed_chars);
}

int	ft_check_format(const char *str, va_list args)
{
	int	i;
	int	printed_chars;

	i = 0;
	printed_chars = 0;
	if (str[i] == 'c')
		printed_chars += ft_putchar(va_arg(args, int));
	if (str[i] == 's')
		printed_chars += ft_putstr(va_arg(args, char *));
	if (str[i] == 'p')
		printed_chars += ft_puthex(va_arg(args, int), str[i]);
	if (str[i] == 'd' || str[i] == 'i')
		printed_chars += ft_putdeci(va_arg(args, int));
	if (str[i] == 'u')
		printed_chars += ft_putunnbr(va_arg(args, unsigned int));
	if (str[i] == '%')
		printed_chars += ft_putchar('%');
	if (str[i] == 'X' || str[i] == 'x')
		printed_chars += ft_puthex(va_arg(args, int), str[i]);
	return (printed_chars);
}
/*
int	main(void)
{
	int	i;

	i = ft_printf("Test c:\n	UPPER: %c | lower: %c\n", 'H', 'h');
	ft_printf("Printed c: %d\n\n", i);
	i = ft_printf("Test s:\n	s1: %s | s2: %s\n", "Tremendo", "Gilipollas");
	ft_printf("Printed s: %d\n\n", i);
	i = ft_printf("Test d:\n	min: %d | neg:%d | zero: %d ", INT_MIN, -42, 0);
	i += ft_printf("| pos: %d | max: %d \n", INT_MIN, -42, 0, 42, INT_MAX);
	ft_printf("Printed d: %d\n\n", i);
	i = ft_printf("Test i:\n	min: %i | neg:%i | zero: %i ", INT_MIN, -42, 0);
	i += ft_printf("| pos: %i | max: %i \n", INT_MIN, -42, 0, 42, INT_MAX);
	ft_printf("Printed i: %d\n\n", i);
	i = ft_printf("Test u:\n	u1: %u | u2: %u ", INT_MIN, INT_MAX);
	i += ft_printf("| u3: %u\n", INT_MIN, INT_MAX, 4294967295);
	ft_printf("Printed u: %d\n\n", i);
	i = ft_printf("Test x:\n	x1: %x | x2: %x | x3: %x\n", 71336, 15, 8);
	ft_printf("Printed x: %d\n\n", i);
	i = ft_printf("Test X:\n	X1: %X | X2: %X | X3: %X\n", 71336, 15, 8);
	ft_printf("Printed X: %d\n\n", i);
	i = ft_printf("Test %%:\n	%: %% | %d%% | %d%% | %d%%\n", 0, 50, 100);
	write (1, "\n", 1);
	return (0);
}*/

/*
int main() {
    // Casos para caracteres (%c)
    printf("Casos para caracteres:\n");
    ft_printf("Caracter: %c\n", 'A');
    ft_printf("Caracter especial: %c\n", '%');
    ft_printf("Caracter nulo: %c\n", '\0');
    ft_printf("Otro caracter: %c\n", 'Z');
    ft_printf("Caracter de escape: %c\n", '\t');
    ft_printf("Caracter de nueva línea: %c\n", '\n');
    ft_printf("Caracter de retorno de carro: %c\n", '\r');
    ft_printf("Caracter de retroceso: %c\n", '\b');
    ft_printf("Caracter de salto de página: %c\n", '\f');
    ft_printf("Caracter de alerta: %c\n", '\a');
    printf("\n");

    // Casos para cadenas (%s)
    printf("Casos para cadenas:\n");
    ft_printf("Cadena: %s\n", "Hola, mundo!");
    ft_printf("Cadena vacía: %s\n", "");
    ft_printf("Otra cadena: %s\n", "¡Hola a todos!");
    ft_printf("Cadena larga: %s\n", "Esta es una cadena muy larga para probar.");
    ft_printf("Cadena nula: %s\n", NULL);
    ft_printf("Cadena con formato: %s\n", "La respuesta es %d");
    ft_printf("Cadena con caracteres especiales: %s\n", "Esto es un tabulador:\tY esto una nueva línea:\n");
    ft_printf("Cadena con porcentaje: %s\n", "Esto es un porcentaje: %%");
    ft_printf("Cadena con números: %s\n", "1234567890");
    ft_printf("Cadena con caracteres especiales: %s\n", "Esto es un carácter de retroceso:\b");
    printf("\n");

    // Casos para punteros (%p)
    printf("Casos para punteros:\n");
    int *ptr = NULL;
    ft_printf("Puntero NULL: %p\n", ptr);
    ft_printf("Dirección de la función main: %p\n", &main);
    ft_printf("Otro puntero: %p\n", &ptr);
    ft_printf("Puntero a una variable: %p\n", (void*)&ptr);
    ft_printf("Puntero a una cadena: %p\n", (void*)"Hello");
    ft_printf("Puntero a una función: %p\n", (void*)&printf);
    ft_printf("Puntero a otra función: %p\n", (void*)&ft_printf);
    ft_printf("Puntero a la función exit: %p\n", (void*)&exit);
    ft_printf("Puntero a una constante: %p\n", (void*)NULL);
    ft_printf("Puntero a la función putchar: %p\n", (void*)&putchar);
    printf("\n");

    // Casos para enteros (%d/%i)
    printf("Casos para enteros:\n");
    ft_printf("Entero positivo: %d\n", 123);
    ft_printf("Entero negativo: %d\n", -456);
    ft_printf("Entero cero: %d\n", 0);
    ft_printf("Otro entero positivo: %d\n", 789);
    ft_printf("Otro entero negativo: %d\n", -321);
    ft_printf("Entero grande: %d\n", 2147483647);
    ft_printf("Entero pequeño: %d\n", -2147483647);
    ft_printf("Entero con formato: %d\n", 123456);
    ft_printf("Entero con signo positivo: %d\n", 123);
    ft_printf("Entero con signo negativo: %d\n", -456);
    printf("\n");

    // Casos para enteros sin signo (%u)
    printf("Casos para enteros sin signo:\n");
    ft_printf("Entero sin signo: %u\n", 789);
    ft_printf("Entero sin signo cero: %u\n", 0);
    ft_printf("Otro entero sin signo: %u\n", 456);
    ft_printf("Entero sin signo grande: %u\n", 4294967295);
    ft_printf("Entero sin signo pequeño: %u\n", 12345);
    ft_printf("Entero sin signo con formato: %u\n", 987654);
    printf("\n");

    // Casos para porcentaje (%%)
    printf("Casos para porcentaje:\n");
    ft_printf("Porcentaje: %%\n");
    ft_printf("Otro porcentaje: %%\n");
    ft_printf("Porcentaje en una cadena: %s%%\n", "20");
    ft_printf("Porcentaje con formato: %.2f%%\n", 50.5);
    ft_printf("Porcentaje en una frase: El 80%% de los estudiantes aprobó.\n");
    ft_printf("Porcentaje con número: %d%%\n", 75);
    ft_printf("Porcentaje en un número: %f%%\n", 33.333);
    ft_printf("Porcentaje en una dirección: %p%%\n", (void*)&printf);
    ft_printf("Porcentaje en un puntero: %p%%\n", (void*)&ptr);
    printf("\n");

    // Casos para números hexadecimales (%x/%X)
    printf("Casos para números hexadecimales:\n");
    ft_printf("Número hexadecimal (minúsculas): %x\n", 255);
    ft_printf("Número hexadecimal (mayúsculas): %X\n", 255);
    ft_printf("Otro número hexadecimal (minúsculas): %x\n", 4096);
    ft_printf("Otro número hexadecimal (mayúsculas): %X\n", 8192);
    ft_printf("Número hexadecimal grande (minúsculas): %x\n", 4294967295);
    ft_printf("Número hexadecimal pequeño (mayúsculas): %X\n", 255);
    ft_printf("Número hexadecimal con formato (minúsculas): %08x\n", 123);
    ft_printf("Número hexadecimal con formato (mayúsculas): %08X\n", 123);
    ft_printf("Número hexadecimal con signo (minúsculas): %x\n", -123);
    ft_printf("Número hexadecimal con signo (mayúsculas): %X\n", -123);
    printf("\n");

    return 0;
}*/

