/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:09:35 by lferro            #+#    #+#             */
/*   Updated: 2023/10/12 12:25:48 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*anbr;
	int		*i;

	i = (int []){3, n};
	if (n == 0)
		return ("0");
	while ((i[1] > 9 || i[1] < -9) && i[0]++)
		i[1] /= 10;
	if (n >= 0)
		i[0]--;
	anbr = malloc(sizeof(char) * i[0]);
	if (n < 0)
	{
		n = -n;
		anbr[0] = '-';
	}
	if (anbr == 0)
		return (NULL);
	anbr[--i[0]] = 0;
	while (n > 0)
	{
		anbr[i[0]-- - 1] = (n % 10) + 48;
		n /= 10;
	}
	return (anbr);
}

// char	*ft_itoa(int n)
// {
// 	char	*anbr;
// 	int		i;
// 	int		nbr;

// 	nbr = n;
// 	i = 3;
// 	while ((nbr > 9 || nbr < -9) && i++)
// 		nbr /= 10;
// 	if (n >= 0)
// 		i--;
// 	anbr = malloc(sizeof(char) * i);
// 	if (n < 0)
// 	{
// 		n = -n;
// 		anbr[0] = '-';
// 	}
// 	if (anbr == 0)
// 		return (NULL);
// 	anbr[--i] = 0;
// 	while (n > 0)
// 	{
// 		anbr[i-- - 1] = (n % 10) + 48;
// 		n /= 10;
// 	}
// 	return (anbr);
// }

// int main(int argc, char const *argv[])
// {
// 	int n = 0;
// 	printf("%s", ft_itoa(n));
// 	return 0;
// }
