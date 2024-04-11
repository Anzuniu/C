//Allocates memory and fills it with zeros.

void	*calloc(size_t n, size_t size)
{
	void	*p;
	size_t	i;

	p = malloc(n * size);
	if (!p)
		return (NULL);
	i = 0;
	while (i < n * size)
	{
		*((char *)p + i) = 0;
		i++;
	}
	return (p);
}
