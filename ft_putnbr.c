/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:36:07 by lferro            #+#    #+#             */
/*   Updated: 2023/10/09 17:44:48 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int	nbr;

	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0 && n > -2147483648)
	{
		n = -n;
		ft_putchar('-');
	}
	else if (n == 0)
		ft_putchar(0 + 48);
	if (n > 9)
	{
		nbr = n % 10;
		n = n / 10;
		ft_putnbr(n);
		ft_putchar(nbr + 48);
	}
	else if (n < 10)
		ft_putchar(n + 48);
}


int main(int argc, char const *argv[])
{	ft_putnbr(123);
	return 0;
}
