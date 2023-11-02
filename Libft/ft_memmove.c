#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    if (dest == NULL || src == NULL)
        return (NULL);
    //unsigned int    i;
    char    *str1;
    char    *str2;
    
    str1 = (char *) src;
    str2 = (char *) dest;
    //i = 0;
    /*if (str1 < str2 && str1 + n > str2)
    {
        while (str1[i] && i < n)
        {
            str2[i] = str1[i];
            i++;
        }
    }
    else
    */    ft_memcpy(str2, str1, n);
    return (str2);
}

int main()
{
    char    *src;
    char    dst[13] = "nobody knows?";

    src = "Hello everyone";
    printf("%s\n", dst);
    ft_memmove(dst, src, 3);
    printf("%s\n", src);
    printf("%s\n", dst);
    return (0);
}