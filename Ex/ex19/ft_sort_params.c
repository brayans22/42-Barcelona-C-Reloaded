#include <stdio.h>
#include <unistd.h>

void    ft_swap(char **argv, int i, int j)
{
    char    *tmp;

    tmp = argv[i];
    argv[i] = argv[j];
    argv[j] = tmp;
}

int    ft_strcmp(char *s1, char *s2)
{
    unsigned int    i;

    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

void    ft_print_params(int argc, char **argv)
{
    unsigned int	i;
	unsigned int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		j = 0;
		write(1, "\n", 1);
		i++;
	}
}

int main(int argc, char **argv)
{
    int i;
    int j;

    /*
    char *argv[] = {"a.out", "Daniel", "Ernesto", "Zara", "aAlicia", 
                    "Ana", "Fabian", "Marina", "Gaby", "Brayan", "AAAA", 
                    "BBBBB", "TU PTM"};
    int argc = 13;
    */
    if (argc > 1)
    {
        i = 1;
        j = 1;
        while (i < argc)
        {    
            while (j < argc - i)
            {
                if(ft_strcmp(argv[j], argv[j + 1]) > 0)
                    ft_swap(argv, j, j + 1);
                j++;
            }
            j = 1;
            i++;
        }
        ft_print_params(argc, argv);
    }
    return (0);
}