#include "libft.h"
#include <stdio.h>

void    ft_bzero(void *s, unsigned int n)
{
    int i;

    i = 0;
    ft_memset(s, i, n);
}