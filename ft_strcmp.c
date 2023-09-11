/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:16:55 by larbitrator       #+#    #+#             */
/*   Updated: 2023/09/06 14:35:24 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// int main(void)
// {

// 	char *s1 = "\0 je mange";
// 	char *s2 = "\0   je mangebsaf";

// 	printf("%d\n", ft_strcmp(s1, s2));
// 	printf("%d\n", strcmp(s1, s2));
// 	return (0);
// }
