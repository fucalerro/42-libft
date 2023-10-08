/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:16:09 by lferro            #+#    #+#             */
/*   Updated: 2023/10/02 14:52:44 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (ft_strncmp(s1, s2, n) == 0)
		return (1);
	return (0);
}

// int main(int argc, char const *argv[])
// {
// 	char *s1 = "je mange";
// 	char *s2 = "je maeSnge";
// int n = 5;

// 	printf("%d", ft_strnequ(s1, s2, n));
// 	return 0;
// }
