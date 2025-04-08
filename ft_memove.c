#include "libft.h"

void    *ft_memove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;
    int i;
    i = 0;
    if (d > s && d < s + n)
    {
        while (i < n)
        {
            d[i - 1] = s[i - 1];
            i++;
        }
    }
    else
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}