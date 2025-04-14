#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
    size_t                  i;
    const unsigned char     *p; // variable for cast

    p = ptr; //cast
    i = 0;
    while (i < num)
    {
        if (p[i] == (unsigned char)value) //cast int value for char
            return ((void *)&p[i]);//return pointer for first occurrence
        i++;
    }
    return (NULL);
}
/* #include <stdio.h>

int main()
{
    char    name[] = "Carmelo";
    int     value = 97;
    size_t  num = 3;
    char    *result;

    result = ft_memchr(name, value, num);

    if (result != NULL)
        printf("First occurrence %s", result);
    else
        printf("Nada encontrado %s", result);
} */