/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoliv <carmoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 23:12:56 by carmoliv          #+#    #+#             */
/*   Updated: 2025/04/17 23:52:47 by carmoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;

	if(!(ptr = (char *)malloc(ft_strlen(s) + 1)))
		return (0);
	ft_strlcpy(ptr, s, ft_strlen(s) + 1);
	
	return(ptr);
}