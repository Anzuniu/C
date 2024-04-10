| Function                         | Description                                                                     |  Prototype                                                                       |
| -------------------------------- | ------------------------------------------------------------------------------- |--------------------------------------------------------------------------------- |
| [ft_isalpha](./src/ft_isalpha.c) | verifica si el caracter `c` es **alfabetico**                                   | int ft_isalpha(int c);                                                           |
| [ft_isdigit](./src/ft_isdigit.c) | verifica si el caracter `c` es **numerico**                                     | int ft_isdigit(char c);                                                          |
| [ft_isalnum](./src/ft_isalnum.c) | verifica si el caracter `c` es **alfabetico** o **numerico**                    | int ft_isalnum(int c);                                                           |
| [ft_isascii](./src/ft_isascii.c) | verifica si el caracter `c` está en la tabla **ascii**                          | int ft_isascii(int c);                                                           |
| [ft_isprint](./src/ft_isprint.c) | verifica si el caracter `c` es **imprimible**                                   | int ft_isprint(char c);                                                          |
| [ft_strlen](./src/ft_strlen.c)   | calcula la **longitud** de la cadena `str`                                      | int    ft_strlen(char *str);                                                     |
| [ft_memset](./src/ft_memset.c)   | cambia los valores de los `size` primeros datos de `str` por `c`                | char    *ft_memset(char *str, char c, size_t size);                              |
| [ft_bzero](./src/ft_bzero.c)     | convierte en **nulo** los valores de los `size` primeros datos de `str`         | void    *ft_bzero(char *str, size_t n);                                          |
| [ft_memcpy](./src/ft_memcpy.c)   | copia los primeros `size` valores de `str` por `c`                              | void *ft_memcpy(void *dest, const void *src, size_t size);                       |
| [ft_memmove](./src/ft_memmove.c) | copia los primeros `size` valores de `src` a `dest` (hasta si se superponen)    | void *ft_memmove(void *dest, const void *src, size_t size);                      |
| [ft_srtlcpy](./src/ft_strlcpy.c) | copia los primeros `size` caracteres de `src` a `dest`                          | unsigned int	ft_strlcpy(char	*dest, char	*src, size_t size);                     |
| [ft_strlcat](./src/ft_strlcat.c) | concatena `src` en `dest` hasta que **este** llegue a su maximo`size`           | int    ft_strlcat(char *sr1, char  *sr2, size_t size);                           |
| [ft_toupper](./src/ft_toupper.c) | convierte el caracter `c` en **mayuscula**                                      | char    *ft_toupper(char *str);                                                  |
| [ft_tolower](./src/ft_tolower.c) | convierte el caracter `c` en **minuscula**                                      | char    *ft_tolower(char *str);                                                  |
| [ft_strchr](./src/ft_strchr.c)   | busca la **primera** aparición del caracter `c` en la cadena `str`              | char *ft_strchr(const char *s, int c);                                           |
| [ft_strrchr](./src/ft_strrchr.c) | busca la **última** aparición del caracter `c` en la cadena `str`               | char *ft_strrchr(const char *str, int c);                                        |
| [ft_strncmp](./src/ft_strncmp.c) | compara los primeros `size` de **caracteres** de las cadenas `s1` y `s2`        | int strncmp(const char *str1, const char *str2, size_t size);                    |
| [ft_memchr](./src/ft_memchr.c)   | busca la primera aparición del byte `c` en `str` hasta el tamaño maximo`size`   | void	*ft_memchr(const void *str, int c, size_t size);                            |
| [ft_memcmp](./src/ft_memcmp.c)   | compara los primeros `size` de **datos** de `s1` y `s2`                         | int ft_memcmp(const void *ptr1, const void *ptr2, size_t size);                  |
| [ft_strnstr](./src/ft_strnstr.c) | busca la primera aparición de la **subcadena** `needle` en la cadena `haystack` | const char *ft_strnstr(const char *haystack, const char *needle, size_t size);   |
| [ft_atoi](./src/ft_atoi.c)       | convierte `str` en un `int`                                                     | int ft_atoi(char *str);                                                          |

| Function                         | Description                                                                     |  Prototype                                                                       |
| -------------------------------- | ------------------------------------------------------------------------------- |--------------------------------------------------------------------------------- |
| [ft_calloc](./src/ft_calloc.c)   | asigna **Mermoria Dinamica** a una string empezada por datos **nulos**          | void *calloc(size_t n, size_t size);                                             |
| [ft_strdup](./src/ft_strdup.c)   | asigna **MD** a una string que contien `str`                                    | char *ft_strdup(const char *str);                                                |

| Function                         | Description                                                                     |  Prototype                                                                       |
| -------------------------------- | ------------------------------------------------------------------------------- |--------------------------------------------------------------------------------- |
| [ft_substr](./src/ft_substr.c)   | busca la **primera** aparición del caracter `c` en la cadena `str`              | char *ft_substr(char const *s, unsigned int start , size_t len);                 |
| [ft_strjoin](./src/ft_strjoin.c) | busca la **última** aparición del caracter `c` en la cadena `str`               | char *ft_strjoin(char const *s1, char const *s2);                                |
| [ft_strtrim](./src/ft_strtrim.c) | compara los primeros `size` de **caracteres** de las cadenas `s1` y `s2`        | char *ft_strtrim(char const *s1, char const *set) ;                              |
| [ft_split](./src/ft_split.c)     | busca la primera aparición del byte `c` en `str` hasta el tamaño maximo`size`   | char **ft_split(char const *s, char c);                                          |
| [ft_itoa](./src/ft_itoa.c)       | compara los primeros `size` de **datos** de `s1` y `s2`                         | char *ft_itoa(int n);                                                            |
| [ft_strmapi](./src/ft_strmapi.c) | busca la primera aparición de la **subcadena** `needle` en la cadena `haystack` | char *ft_strmapi(char const *s, char (*f)(unsigned int, char));                  | 
| [ft_striteri](./src/ft_striteri.c)| convierte `str` en un `int`                                                    | void ft_striteri(char *s, void (*f)(unsigned int, char*));                       | 
| [ft_putchar_fd](./src/ft_putchar_fd.c)| asigna **Mermoria Dinamica** a una string empezada por datos **nulos**     | void ft_putchar_fd(char c, int fd);                                              |
| [ft_putstr_fd](./src/ft_putstr_fd.c)   | asigna **MD** a una string que contien `str`                              | void ft_putstr_fd(char *s, int fd);                                              |
| [ft_putendl_fd](./src/ft_putendl_fd.c)| asigna **Mermoria Dinamica** a una string empezada por datos **nulos**     | void ft_putendl_fd(char *s, int fd);                                             |
| [ft_putnbr_fd](./src/ft_putnbr_fd.c)   | asigna **MD** a una string que contien `str`                              | void ft_putnbr_fd(int n, int fd);                                                |
