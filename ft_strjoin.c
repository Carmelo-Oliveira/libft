#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *dest;
    size_t  len_s1;
    size_t  len_s2;
    int     i;
    int     j;

    i = 0;
    j = 0;
    if(!s1 || !s2)
        return (NULL);
    len_s1 = ft_strlen(s1);
    len_s2 = ft_strlen(s2);
    if (!(dest = (char *)malloc(len_s1 + len_s2 + 1)))
        return (NULL);
    while (i < len_s1)
    {
        dest[i] = s1[i];
        i++;
    }
    while (j < len_s2)
    {
        dest[i + j] = s2[j];
        j++;
    }
    dest [i + j] = '\0';
    return (dest);
}

int main()
{
    char    *name = "Carmelo";
    char    *name2 = "Oliveira";
    char    *result;

    printf("String together: %s\n", result = ft_strjoin(name, name2));
}