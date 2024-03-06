/*Determina si un carácter es un valor ASCII válido.
Retorna un valor distinto de cero si el carácter es un valor ASCII válido; de lo contrario, retorna 0.*/

 int ft_isascii(int c)
 {
    if(c >= 32 && c <= 126)
        return (1);
    else
        return (0);
 }