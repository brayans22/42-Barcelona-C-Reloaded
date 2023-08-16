#include <stdlib.h>

int ft_strlen(char *str, int count)
{
    if (str[count] == '\0')
        return (count);
    return ft_strlen(str, count + 1);
}

char *ft_strdup(char *src)
{
    int     i;
    char    *aux;
    
    i = 0;
    aux = (char *)malloc(ft_strlen(src, 0) + 1);
    if (!aux)
        return (0);
    while (src[i] != '\0')
    {
        aux[i] = src[i];
        i++;
    }
    aux[i] = '\0';
    return (aux);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{   
    char src[] =  "hola      wwwww";
    printf("%s\n", ft_strdup(src) );
    char srci[] = "Hola      wwwww";
    printf("%s\n", strdup(srci) );
    return (0);
}
*/