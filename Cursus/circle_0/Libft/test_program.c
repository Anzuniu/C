#include "libft.h"

int main() {
    // Variables de prueba
    char c = 'A';
    char c2 = 'm';
    char c3 = 'h';
    char *str = "Como estan los maquinas";
    char *s1 = "Como estan";
    char *s2 = "los maquinas";
    char *s3 = "    trim me     ";
    char set[] = " ";
    char *s4 = "Como estan los maquinas";

    // MANDATORY
    printf("\n------------------------------------------------------------------------------------\n                        PARTE 1  FUNCIONES DE LIBC                          \n------------------------------------------------------------------------------------\n\n");
    // ft_isalpha TEST
    printf("Test ft_isalpha :\n");
    printf("	A ---> Valor esperado 1 : %d\n", ft_isalpha('A'));
    printf("	1 ---> Valor esperado 0 : %d\n\n", ft_isalpha('1'));
    
    // ft_isdigit TEST
    printf("Test ft_isdigit :\n");
    printf("	A ---> Valor esperado 0 : %d\n", ft_isdigit('A'));
    printf("	1 ---> Valor esperado 1 : %d\n\n", ft_isdigit('1'));
    
    // ft_isalnum TEST
    printf("Test ft_isalnum :\n");
    printf("	A ---> Valor esperado 1 : %d\n", ft_isalnum('A'));
    printf("	1 ---> Valor esperado 1 : %d\n\n", ft_isalnum('1'));
    
    // ft_isascii TEST
    printf("Test ft_isascii :\n");
    printf("	48 ---> Valor esperado 1 :  %d\n", ft_isascii(48));
    printf("	126 ---> Valor esperado 1 : %d\n", ft_isascii(127));
    printf("	127 ---> Valor esperado 0 : %d\n\n", ft_isascii(128));

    // ft_isprint TEST
    printf("Test ft_isprint :\n");
    printf("	48 ---> Valor esperado 1 :  %d\n", ft_isprint(48));
    printf("	10 ---> Valor esperado 0 : %d\n\n", ft_isprint(10));
    
    // ft_strlen TEST
    printf("Test ft_strlen :\n");
    printf("	\"Como estan los maquinas\" : %zu\n", ft_strlen(str));
    printf("	\"Croqueta\" : %zu\n\n", ft_strlen("Croqueta"));
	
    printf("\n");

     // ft_memset TEST
    printf("Test ft_memset :\n");
    char str1_mem[10] = "abcdefghi";
    printf("	Carácter sustituto : 'X'\n");
    printf("	Número a sustituir : %d\n", 5);
    printf("	Return de la función : %p\n", ft_memset(str1_mem, 'X', 5));
    printf("	Resultado : %s\n\n", str1_mem);

    // ft_bzero TEST
    printf("Test ft_bzero :\n");
    char str2_mem[10] = "abcdefghi";
    ft_bzero(str2_mem, 5);
    printf("	Cadena original : abcdefghi\n	Número a sustituir : 5\n	Resultado:");
    for (int i_mem = 0; i_mem < 9; i_mem++) {
        printf("%c ", str2_mem[i_mem]);
    }
    printf("\n");

    // ft_memcpy TEST
    printf("Test ft_memcpy :\n");
    char src_mem1[10] = "123456789";
    char dest_mem1[10];
    printf("	Cadena SRC : %s\n	Cadena DEST original : %s\n	Número a copiar : %d\n", src_mem1, dest_mem1, 5);
    ft_memcpy(dest_mem1, src_mem1, 5);
    printf("	Cadena DEST copiada : %s\n\n", dest_mem1);

    // ft_memmove TEST
    printf("Test ft_memmove :\n");
    char str3_mem[] = "123456789";
    char str4_mem[] = "abcdefghi";
    printf("	Cadena original : %s\n	Cadena sustituta : %s\n	Número a sustituir : %d\n", str3_mem, str4_mem, 4);
    ft_memmove(str4_mem, str3_mem, 4);
    printf("	Resultado : %s\n", str4_mem);
    
    printf("\n");

    // ft_strlcpy CHECK
    printf("Test ft_strlcpy :\n");
    char dest_mem[20];
    printf("	dest, \"Hello, world!\", 14 : %zu, %s\n\n", ft_strlcpy(dest_mem, "Hello, world!", 14), dest_mem);

    // ft_strlcat CHECK
    printf("Test ft_strlcat :\n");
    char dest2_mem[20] = "Hello, ";
    printf("	dest2, \"world!\", 13 : %zu, %s\n", ft_strlcat(dest2_mem, "world!", 13), dest2_mem);

    printf("\n");

    // ft_toupper CHECK
    printf("Test ft_toupper :\n");
    printf("	'a' : %c\n", ft_toupper('a'));
    printf("	'A' : %c\n", ft_toupper('A'));
    printf("	'z' : %c\n", ft_toupper('z'));
    printf("	'Z' : %c\n\n", ft_toupper('Z'));

    // ft_tolower TEST
    printf("Test ft_tolower :\n");
    printf("	'a' : %c\n", ft_tolower('a'));
    printf("	'A' : %c\n", ft_tolower('A'));
    printf("	'z' : %c\n", ft_tolower('z'));
    printf("	'Z' : %c\n", ft_tolower('Z'));

    printf("\n");

    // ft_strchr TEST
    printf("Test ft_strchr :\n");
    char *result_strchr = ft_strchr(str, c2);
    if (result_strchr) {
        printf("	\"%s\", '%c' : Encontrado en la posición %ld\n", str, c2, result_strchr - str);
    } else {
        printf("	\"%s\", '%c' : No encontrado\n", str, c2);
    }
    result_strchr = ft_strchr(str, c3);
    if (result_strchr) {
        printf("	\"%s\", '%c' : Encontrado en la posición %ld\n", str, c3, result_strchr - str);
    } else {
        printf("	\"%s\", '%c' : No encontrado\n\n", str, c3);
    }

    // ft_strrchr TEST
    printf("Test ft_strrchr :\n");
    char *result_strrchr = ft_strrchr(str, c2);
    if (result_strrchr) {
        printf("	\"%s\", '%c' : Encontrado en la posición %ld\n", str, c2, result_strrchr - str);
    } else {
        printf("	\"%s\", '%c' : No encontrado\n", str, c2);
    }
    result_strrchr = ft_strrchr(str, c3);
        if (result_strrchr) {
        printf("	\"%s\", '%c' : Encontrado en la posición %ld\n", str, c3, result_strrchr - str);
    } else {
        printf("	\"%s\", '%c' : No encontrado\n\n", str, c3);
    }

    // ft_strncmp TEST
    char 	*s1_cmp = "Como estan los maquinas";
    char 	*s2_cmp = "Como estan los Maquinas";
    size_t	size_cmp = 20;
    int 	result_strncmp = ft_strncmp(s1_cmp, s2_cmp, size_cmp);
    printf("Test ft_strncmp :\n");
    if (result_strncmp == 0) {
        printf("	\"%s\", \"%s\", %zu : Las cadenas son iguales\n", s1_cmp, s2_cmp, size_cmp);
    } else if (result_strncmp < 0) {
        printf("	\"%s\", \"%s\", %zu : La cadena 1 es menor que la cadena 2\n", s1_cmp, s2_cmp, size_cmp);
    } else {
        printf("	\"%s\", \"%s\", %zu : La cadena 1 es mayor que la cadena 2\n", s1_cmp, s2_cmp, size_cmp);
    } 
    s1_cmp = "Como estan los maquinas";
    char	*s3_cmp = "Como estan los maquinas";
    size_cmp = 20;
    result_strncmp = ft_strncmp(s1_cmp, s3_cmp, size_cmp);
    if (result_strncmp == 0) {
        printf("	\"%s\", \"%s\", %zu : Las cadenas son iguales\n", s1_cmp, s3_cmp, size_cmp);
    } else if (result_strncmp < 0) {
        printf("	\"%s\", \"%s\", %zu : La cadena 1 es menor que la cadena 2\n", s1_cmp, s3_cmp, size_cmp);
    } else {
        printf("	\"%s\", \"%s\", %zu : La cadena 1 es mayor que la cadena 2\n", s1_cmp, s3_cmp, size_cmp);
    }
    result_strncmp = ft_strncmp(s2_cmp, s1_cmp, size_cmp);
    if (result_strncmp == 0) {
        printf("	\"%s\", \"%s\", %zu : Las cadenas son iguales\n", s2_cmp, s1_cmp, size_cmp);
    } else if (result_strncmp < 0) {
        printf("	\"%s\", \"%s\", %zu : La cadena 1 es menor que la cadena 2\n", s2_cmp, s1_cmp, size_cmp);
    } else {
        printf("	\"%s\", \"%s\", %zu : La cadena 1 es mayor que la cadena 2\n", s2_cmp, s1_cmp, size_cmp);
    }

    printf("\n");

    // ft_memchr TEST
    printf("Test ft_memchr :\n");
    char str_memcmp[] = "123456789";
    char *result_memcmp = ft_memchr(str_memcmp, '5', 9);
    printf("        Cadena donde buscar : %s\n	Carácter a buscar : %c\n        Número de carácteres a analizar : %d\n", str_memcmp, '5', 9);
    if (result_memcmp) {
    	printf("	Encontrado en la posición %ld\n\n", result_memcmp - str_memcmp);
    } else {
        printf("	No encontrado\n\n");
    }

    // ft_memcmp TEST
    printf("Test ft_memcmp :\n");
    char	s1_memcmp[] = "abcde";
    char	s2_memcmp[] = "abcdE";
    size_t	size_memcmp = 5;
    printf("	Primera cadena : %s\n	Segunda cadena : %s\n	Número de carácteres a comparar : %ld\n", s1_memcmp, s2_memcmp, size_memcmp);
    ft_memcmp(s1_memcmp, s2_memcmp, size_memcmp);
    printf("	Resultado : %d\n\n", ft_memcmp(s1_memcmp, s2_memcmp, size_memcmp));

    // ft_strnstr TEST
    printf("Test de ft_strnstr :\n");
    char *haystack_strnstr = "Como estan los maquinas";
    char *needle_strnstr = "maquinas";
    size_t size_strnstr = 30;
    char *result_ft_strnstr = ft_strnstr(haystack_strnstr, needle_strnstr, size_strnstr);
    if (result_ft_strnstr) 
    {
        printf("	\"%s\", \"%s\", %zu : Encontrado en la posición %ld\n", haystack_strnstr, needle_strnstr, size_strnstr, result_ft_strnstr - haystack_strnstr);
    }
    else 
    {
        printf("	\"%s\", \"%s\", %zu : No encontrado\n", haystack_strnstr, needle_strnstr, size_strnstr);
    }
    
    needle_strnstr = "Maquinas";
    size_strnstr = 30;
    result_ft_strnstr = ft_strnstr(haystack_strnstr, needle_strnstr, size_strnstr);
    if (result_ft_strnstr) {
        printf("	\"%s\", \"%s\", %zu : Encontrado en la posición %ld\n\n", haystack_strnstr, needle_strnstr, size_strnstr, result_ft_strnstr - haystack_strnstr);
    } else {
        printf("	\"%s\", \"%s\", %zu : No encontrado\n\n", haystack_strnstr, needle_strnstr, size_strnstr);
    }

    // ft_atoi TEST
    printf("Test de ft_atoi :\n");
    char *num_str[] = {
        "12345",         // Número positivo
        "-12345",        // Número negativo
        "   12345",      // Espacios delante del número
        "12345   ",      // Espacios detrás del número
        "  +12345",      // Signo explícito positivo
        "  - 12345",     // Espacios entre el signo y el número
        "abc12345",      // Letras antes del número
        "12345abc",      // Letras después del número
        "  12 345  ",    // Espacios en el medio del número
        "+",             // Solo signo positivo
        "-",             // Solo signo negativo
        "   ",           // Espacios sin números
        "\n12345",       // Carácter de nueva línea antes del número
        "12345\n",       // Carácter de nueva línea después del número
        "\t12345",       // Carácter de tabulación antes del número
        "12345\t"        // Carácter de tabulación después del número
    };
    for (size_t i = 0; i < sizeof(num_str) / sizeof(num_str[0]); i++) {
        printf("	\"%s\" : %d\n", num_str[i], ft_atoi(num_str[i]));
    }
        printf("\n");


    // ft_calloc TEST
    size_t nmemb_calloc = 5;
    size_t size_calloc = sizeof(int);//4 es el tamaño de 1 int
    int *ptr_calloc = ft_calloc(nmemb_calloc, size_calloc);
    printf("Test ft_calloc : \n");
    if (ptr_calloc != NULL) {
	printf("        Memoria a asignar: %ld\n Bytes de cada asignación: %ld\n", nmemb_calloc, size_calloc);
        printf("	\n	Memoria asignada correctamente.   \n");
	printf("	Valores asignados por ft_calloc:");
        for (size_t i_calloc = 0; i_calloc < nmemb_calloc; i_calloc++) {
            printf(" %d", ptr_calloc[i_calloc]);
        }
        printf("\n");
        free(ptr_calloc);
    } else {
        printf("Test ft_calloc(%zu, %zu):\n	Error al asignar memoria\n\n", nmemb_calloc, size_calloc);
    }

    // ft_strdup TEST
    printf("Test ft_strdup :\n");
    const char *s1_strdup = "Como estan los maquinas";
    char *duplicate_strdup = ft_strdup(s1_strdup);
    printf("	Cadena a duplicar : %s\n", s1_strdup);
    if (duplicate_strdup != NULL) {
        printf("	Duplicado creado correctamente: %s\n", duplicate_strdup);
        free(duplicate_strdup);
    } else {
        printf("	Error al duplicar la cadena\n\n");
    }


printf("\n------------------------------------------------------------------------------------\n			PARTE 2  FUNCIONES ADICIONALES				\n------------------------------------------------------------------------------------\n\n");

    // ft_substr TEST
    printf("Test ft_substr(\"Como estan los maquinas\", 7, 5): %s\n\n", ft_substr(str, 7, 5));

    // ft_strjoin TEST
    printf("Test ft_strjoin(\"Como estan \", \" los maquinas\"): %s\n\n", ft_strjoin(s1, s2));

    // ft_strtrim TEST
    const char *s1_strtrim = "   Como estan los maquinas   ";
    const char *set_strtrim = " ";
    char *trimmed_strtrim = ft_strtrim(s1_strtrim, set_strtrim);
    if (trimmed_strtrim != NULL) {
        printf("Test ft_strtrim:\n 	Original: \"%s\"\n", s1_strtrim);
        printf("	Trimmed: \"%s\"\n", trimmed_strtrim);
        free(trimmed_strtrim);
    } else {
        printf("Error al llamar a ft_strtrim\n\n");
    }

    // ft_split TEST
    char **words = ft_split(s4, ' ');
    printf("Test ft_split(\"Como estan los maquinas\", ' '):\n");
    for (int i = 0; words[i] != NULL; i++) {
        printf("	%s\n", words[i]);
    }
    printf("\n");

    // ft_itoa TEST
    int num1 = 0;              // Número 0
    int num2 = 12345;          // Número positivo
    int num3 = -12345;         // Número negativo
    int num4 = 2147483647;     // Máximo valor de un int
    int num5 = -2147483648;    // Mínimo valor de un int
    printf("Test ft_itoa :\n");
    printf("	0 : %s\n", ft_itoa(num1));
    printf("	12345 : %s\n", ft_itoa(num2));
    printf("	-12345 : %s\n", ft_itoa(num3));
    printf("	2147483647 : %s\n", ft_itoa(num4));
    printf("	-2147483648 : %s\n\n", ft_itoa(num5));

    printf("quedan STRMAPI, STRITERI, PUTCHAR_FD, PUTSTR_FD, PUTENDL_FD, PUTNBR_FD\n\n");


    printf("\n------------------------------------------------------------------------------------\n                        PARTE 3  FUNCIONES BONUS                          \n------------------------------------------------------------------------------------\n\n");

    return 0;
}
