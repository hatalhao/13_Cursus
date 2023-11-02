#include "libft.h"

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
    void    *ptr;

    ptr = malloc (nmemb * size);
    if (ptr == NULL || size == 0 || nmemb == 0)
        return (NULL);    
    ft_bzero(ptr, nmemb);
    return (ptr);    
}

int main()
{
    char    *str = "Hello everyone";
    printf("%p", ft_calloc(6, 4));
    return (0);
}