/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:36:07 by lferro            #+#    #+#             */
/*   Updated: 2023/09/30 19:14:45 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int	nbr;

	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0 && n > -2147483648)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n == 0)
		putchar(0 + 48);
	if (n > 9)
	{
		nbr = n % 10;
		n = n / 10;
		ft_putnbr(n);
		putchar(nbr + 48);
		return ;
	}
	if (n < 10)
		putchar(n + 48);
}
