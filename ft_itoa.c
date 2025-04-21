/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoliv <carmoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 22:13:39 by carmoliv          #+#    #+#             */
/*   Updated: 2025/04/21 23:02:38 by carmoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	n_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*dest;
	long	len;
	long	num;

	num = n;
	len = n_len(n);
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	if (num == 0)
		dest[0] = '0';
	if (num < 0)
	{
		dest[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		dest[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (dest);
}
/* int	main(void)
{
	int	number = 12345;
	char	*result;

	result = ft_itoa(number);
	printf("%s",result);
	return (0);
} */