/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:18:59 by lferro            #+#    #+#             */
/*   Updated: 2023/10/15 17:50:40 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char c)
{
	if (c == ' ' || c == '\n' || c == '\b' || c == '\t' || c == '\v'
		|| c == '\r' || c == '\f')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	al_signed;

	i = 1;
	j = 0;
	k = 0;
	al_signed = 0;
	while (ft_isspace(nptr[j]) == 1)
		j++;
	if (nptr[j] == '+')
		j++;
	else if (nptr[j] == '-')
	{
		i = -1;
		j++;
	}
	while (nptr[j] >= '0' && nptr[j] <= '9')
		k = k * 10 + nptr[j++] - 48;
	return (k * i);
}

// int main(int argc, char const *argv[])
// {
// 	char *s = "-+54";
// 	printf("%d", ft_atoi(s));
// 	printf("\n%d", atoi(s));

// 	return (0);
// }
