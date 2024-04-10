//Copies size bytes from src to dest, even if they overlap.

void *ft_memmove(void *dest, const void *src, size_t size)
{
    char *d;
    char *s;

    d = (char *)dest;
    s = (char *)src;
    if(!dest && !src)
        return (NULL);
    while(size--)
        *d++ = *s++;
    return(dest);
}