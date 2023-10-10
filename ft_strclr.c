/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:48:33 by lferro            #+#    #+#             */
/*   Updated: 2023/09/29 17:04:26 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	if (!s)
		return ;
	ft_memset(s, 0, ft_strlen(s));
}

// void	ft_strclr(char *s)
// {
// 	size_t	len;
// 	size_t	i;

// 	len = strlen(s);
// 	i = 0;
// 	while (i < len)
// 		s[i++] = 0;
// }

// int main(int argc, char const *argv[])
// {
// 	char *str = strdup("je mange du pain");

// 	printf("%s\n", str);
// 	ft_strclr(str);
// 	printf("after :%s", str);
// 	return (0);
// }
