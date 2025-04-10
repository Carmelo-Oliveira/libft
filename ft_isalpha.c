#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c<= 122))
    {
        return (c);
    }
    return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     int i = 0;


//     printf("%i", i = ft_isalpha(80));
//     return 0;
// }
