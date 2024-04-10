//Checks if character c is alphanumeric.

int ft_isalnum(int c)
{
    return((c>='0' && c <='9') ||
            (c >= 'A' && c <= 'Z') ||
            (c >= 'a' && c <= 'z'));
}