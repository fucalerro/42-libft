/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:21:59 by lferro            #+#    #+#             */
/*   Updated: 2023/10/09 17:44:44 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	int	nbr;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0 && n > -2147483648)
	{
		n = -n;
		ft_putchar_fd('-', fd);
	}
	else if (n == 0)
		ft_putchar_fd(0 + 48, fd);
	if (n > 9)
	{
		nbr = n % 10;
		n = n / 10;
		ft_putnbr(n);
		ft_putchar_fd(nbr + 48, fd);
	}
	else if (n < 10)
		ft_putchar_fd(n + 48, fd);
}
