char    *ft_strcat(char *dest, char *src, unsigned int nb)
{
    int i;
    
    i = 0;
    while (src[i] && i < nb)
    {
        dest[i + ft_strlen(dest)] = src[i];
        i++;
    }
    dest[i + ft_strlen(dest)] = 0;
    return (dest);
}