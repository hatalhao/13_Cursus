#include "libft.h"

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    len;

    i = 0;
    len = ft_strlen(src);
    if (size == 0)
        return (len);
    while (src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    return (len);
}