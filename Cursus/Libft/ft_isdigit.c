/*Comprueba si un carácter es un dígito numérico.
Retorna un valor distinto de cero si el carácter es un dígito numérico; de lo contrario, retorna 0.*/

int ft_isdigit(char c)
{
    return (c >= '0' && c <= '9');
}