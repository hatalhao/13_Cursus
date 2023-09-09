#include "libft.h"
#include <string.h>

unsigned int    ft_strlcat(char* dest, char *src, unsigned int size)
{
    unsigned int    slen;
    unsigned int    dlen;
    unsigned int    tlen;
    int i;

    slen = strlen(src);
    dlen = strlen(dest);
    tlen = slen + dlen;
    i = 0;
    if (size == 0)
        return (slen);
    else if (size > dlen)
    {
        
    }
    if (size < dlen)
    {
        
    }
    return (tlen);
}

#include <stdio.h>

int main()
{
    char arr[] = "";
    return (0);
}