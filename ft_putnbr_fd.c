/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoliv <carmoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 22:23:14 by carmoliv          #+#    #+#             */
/*   Updated: 2025/04/22 22:38:35 by carmoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	x;

	x = n;
	if (x < 0)
	{
		x *= -1;
		ft_putchar_fd('-', fd);
	}
	if (x > 9)
	{
		ft_putnbr_fd(x / 10, 1);
	}
	ft_putchar_fd(x % 10 + '0', 1);
}
/* int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(123, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-123, 1);
} */