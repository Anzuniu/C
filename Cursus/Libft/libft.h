//Check if it is not defined and avoid multiple inclusion. If it is already defined, the preprocessor omits the code between #ifndef and #endif
#ifndef LIBFT_H
//We define it
#define LIBFT_H

//Add other libraries
#include <stdio.h>
#include <stdlib.h>

//Prototype our functions
int             ft_isalpha(int c);
int             ft_isdigit(char c);
int             ft_isalnum(int c);
int             ft_isascii(int c);
int             ft_isprint(char c);
int             ft_strlen(char *str);
char            *ft_memset(char *str, char c, size_t size);
void            *ft_bzero(char *str, size_t n);
void            *ft_memcpy(void *dest, const void *src, size_t size);
void            *ft_memmove(void *dest, const void *src, size_t size);
unsigned int	ft_strlcpy(char	*dest, char	*src, size_t size);
int             ft_strlcat(char *sr1, char  *sr2, size_t size);
char            *ft_toupper(char *str);
char            *ft_tolower(char *str);
char            *ft_strchr(const char *s, int c);
char            *ft_strrchr(const char *str, int c);
int             strncmp(const char *str1, const char *str2, size_t size);
void	        *ft_memchr(const void *str, int c, size_t size);
int             ft_memcmp(const void *ptr1, const void *ptr2, size_t size);
const char      *ft_strnstr(const char *haystack, const char *needle, size_t size);
int             ft_atoi(char *str);
void            *calloc(size_t n, size_t size);
char            *strdup(const char *str);

char            *ft_substr(char const *s, unsigned int start, size_t len);
char            *ft_strjoin(char const *s1, char const *s2);
char            *ft_strtrim(char const *s1, char const *set);

#endif