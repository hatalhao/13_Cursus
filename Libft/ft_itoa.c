#include "libft.h"

char    *ft_itoa(int n)
{
    char    *str;
    unsigned int    i;
    unsigned int    c;

    i = 0;
    c = 0;
    while (str[i])
    {
        if ((str[i] => 9 && str[i] =< 13) || str[i] == 32)
            i++;
    }
    str = malloc ((c + 1) * sizeof (char));
    return (str);
}