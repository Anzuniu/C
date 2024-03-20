/* Indica si un carácter es imprimible (visible)
Retorna un valor distinto de cero si el carácter es imprimible; de lo contrario, retorna 0.*/

int ft_isprint(char c)
{
    return (c >= 32 && c <= 126);
}