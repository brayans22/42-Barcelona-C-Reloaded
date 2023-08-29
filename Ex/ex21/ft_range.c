#include <stdlib.h>
int *ft_range(int min, int max)
{
    int i;
    int *range;

    if (!(range = (int *) malloc(sizeof(int) * (max - min))) || (min >= max))
        return (NULL);
    i = 0;
    while (min < max)
    {
        range[i++] = min;
        min++;
    }
    return (range);
}
/*
I) CASO NO HAY MEMORIA MALLOC
    RETURN (0)
II) MIN >= MAX
    RETURN (0);
III) CUALQUIER OTRA COSA ES VALIDA (MIN < MAX)
    EJEMPLO:
        {11 - 22}
        MIN   MAX
        RANGO DE VALORES POSIBLES {11 - 21}
        22 - 11 = 11 (numeros dentro del rango de valores posibles)

#include <stdio.h>
int main()
{
    int *r = ft_range(11, 22);
    int i = 0;
    while (i++ < 11)
        printf("%i, ", r[i - 1]);
}
*/
