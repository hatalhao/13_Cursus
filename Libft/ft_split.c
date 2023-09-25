#include "libft.h"

char **ft_split(char const *s, char c)
{
    char    *tcS;
    char    **str;
    int     row;
    int     dow;
    int     i1;
    int     i2;
    int     j;
    int     n;

    if (s == NULL)
        return NULL;
    tcS = (char *) s;
    j = 0;
    i1 = 0;
    i2 = 0;
    n = 0;
    while (tcS[j] == c)
            j++;
    while (tcS[j] && tcS[j + 1])
    {
        if (tcS[j] == c && tcS[j + 1] != c && tcS[j + 1] != '\0')
            n++;
        j++;
    }
    j = 0;
    row = n + 1;
    
    str = (char **) malloc ((row + 1) * sizeof(char*));

    dow = 0;
    while (tcS[j])
    {
        if (tcS[j] != c)
        {
            dow++;
        }
        else if (tcS[j] == c && tcS[j + 1] != c && tcS[j + 1] != '\0')
        {
            str[i1] = (char *) malloc ((dow + 1) * sizeof(char));
            i1++;
            dow = 0;
        }
        j++;
    }
    str[i1] = (char *) malloc ((dow + 1) * sizeof(char));


    i1 = 0;
    j = 0;
    while (str[i1])
    {
        //printf("[%d]\n", j);
        while (tcS[j] == c)
            j++;
        while (tcS[j] != c && tcS[j])
        {
            str[i1][i2] = tcS[j];
            j++;
            i2++;
        }
        if (tcS[j] && tcS[j + 1] && tcS[j + 1] != c)
        {
            str[i1][i2] = '\0';
            i1++;
            i2 = 0;
        }
        j++;
    }
    return (str);
}

int main()
{
    char    *str;

    str = "    asd sdf";
    char** ret = ft_split(str, ' ');
    int i = 0;
    while (ret[i])
    {
        printf("[%s]\n", ret[i]);
        i++;
    }
    return (0);
}