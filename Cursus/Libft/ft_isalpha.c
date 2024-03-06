/*Comprueba si un carácter es una letra del alfabeto.
Retorna un valor distinto de cero si el carácter es una letra; de lo contrario, retorna 0.*/

int ft_isalpha(char c)
{
    if(!(c >= '0' && c <='9'))
        return(0);
    else
        return(1);
}