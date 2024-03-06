/*Copia una cadena de caracteres a otra con límite de tamaño.
Retorna el número de caracteres que intentó copiar (sin contar el carácter nulo) en el búfer de destino.*/

unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;			

	j = 0;
	i = 0;
	while (src[j] != 0)
		j++;
	if (size != 0)
	{
		while (src[i] != 0 && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}
