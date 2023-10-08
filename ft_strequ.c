/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:16:09 by lferro            #+#    #+#             */
/*   Updated: 2023/09/30 19:45:57 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}

// int main(int argc, char const *argv[])
// {
// 	char *s1 = "je mange";
// 	char *s2 = "je maeSnge";

// 	printf("%d", ft_strequ(s1, s2));
// 	return 0;
// }
