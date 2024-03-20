/* Verifica si un carácter es alfanumérico (letra o número).
Retorna un valor distinto de cero si el carácter es alfanumérico; de lo contrario, retorna 0.*/
int ft_isalnum(int c)
{
    return((c>='0' && c <='9') ||
            (c >= 'A' && c <= 'Z') ||
            (c >= 'a' && c <= 'z'));
}