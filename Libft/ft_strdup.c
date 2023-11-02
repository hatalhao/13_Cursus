#include "libft.h"

char    *ft_strdup(const char *src)
{
    int     i;
    char    *duplicate;

    duplicate = (char*) malloc(ft_strlen(src) * sizeof(char) + 1);
    if (!duplicate)
    {
        return (NULL);
    }
    i = 0;
    while (src[i])
        {
            duplicate[i] = src[i];
            i++;
        }
    return (duplicate);
}

int main()
{
    const char  *str = "Hello everyone";
    printf("%s", ft_strdup(str));
    return (0);
}