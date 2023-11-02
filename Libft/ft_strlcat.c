#include "libft.h"

size_t    ft_strlcat(char* dest, const char *src, size_t size)
{
    size_t    slen;
    size_t    dlen;
    size_t    tlen;
    size_t    i;

    
    slen = ft_strlen(src);
    dlen = ft_strlen(dest);
    i = 0;
    if (size == 0)
        tlen = slen;
    else if (size < dlen)
    {
            tlen = slen + size;
    }
    else if (size > dlen)
    {
        while (src[i] && (i + dlen) < size - 1)
        {
            dest[i + dlen] = src[i];
            i++;
        }
        dest[i + dlen] = '\0';
        tlen = dlen + slen;
    }
    return (tlen);
}

#include <stdio.h>

int main()
{
    char arr1[] = "Hello ";
    char arr2[] = "everyone";
    printf("%ld\n", ft_strlcat(arr1, arr2, 80));
    return (0);
}