/* Verifica si un carácter es alfanumérico (letra o número).
Retorna un valor distinto de cero si el carácter es alfanumérico; de lo contrario, retorna 0.*/

int ft_isalnum(int argument)
{
    if((argument>='0' && argument <='9') ||
        (argument >= 'A' && argument <= 'Z') ||
        (argument >= 'a' && argument <= 'z'))
        return(1);
    else
        return(0);
}