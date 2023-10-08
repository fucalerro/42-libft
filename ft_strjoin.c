/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:14:17 by lferro            #+#    #+#             */
/*   Updated: 2023/09/28 09:47:08 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// i[0] = i, i[1] = total length
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	*i;

	i = (size_t []){0, strlen(s1) + strlen(s2)};
	res = malloc(sizeof(char) * (i[1] + 1));
	if (res == NULL)
		return (NULL);
	while (*s1)
		res[i[0]++] = *s1++;
	while (*s2)
		res[i[0]++] = *s2++;
	res[i[0]++] = 0;
	return (res);
}

// int	main(void)
// {
// 	char	**s1 = {"", "123456789"};
// 	char	**res = {"", "123456789", "123456789", "123456789123456789"};
// 	for (size_t i = 0; i < 2; i++)
// 		for (size_t j = 0; j < 2; j++)
// 			if (strcmp(ft_strjoin(s1[i], s1[j]), res[i + j]) != 0)
// 				return ERR;
// 	return OK;
// }
