/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:09:35 by lferro            #+#    #+#             */
/*   Updated: 2023/09/30 18:57:03 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_itoa(int n)
{
	char *anbr;
	int i;
	int nbr;
	i = 3;

	while ((nbr > 9 || nbr < -9) && i++)
		nbr /= 10;
	if (n >= 0)
		i--;
	anbr = malloc(sizeof(char) * i);
	if (n < 0)
	{
		n = -n;
		anbr[0] = '-';
	}
	if (anbr == 0)
		return (NULL);
	anbr[--i] = 0;
	while (n > 0)
	{
		anbr[i-- - 1] = (n % 10) + 48;
		n /= 10;
	}
	return anbr;
}

int main(int argc, char const *argv[])
{
	int nbr = -1;

	printf("%s", ft_itoa(nbr));
	return 0;
}
