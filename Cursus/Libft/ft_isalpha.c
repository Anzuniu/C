/*Comprueba si un carácter es una letra del alfabeto.
Retorna un valor distinto de cero si el carácter es una letra; de lo contrario, retorna 0.*/

int ft_isalpha(int c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}