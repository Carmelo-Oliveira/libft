/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoliv <carmoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 22:07:04 by carmoliv          #+#    #+#             */
/*   Updated: 2025/04/10 22:07:05 by carmoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;
    i = 0;


    while(i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}