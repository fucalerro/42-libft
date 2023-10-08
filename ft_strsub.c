/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:57:52 by lferro            #+#    #+#             */
/*   Updated: 2023/09/30 19:13:31 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	*i;

	i = (size_t[]){0, 0};
	res = malloc(sizeof(char) * len);
	if (res == NULL)
		return (NULL);
	while (i[0] < start && *s)
		i[0]++;
	while (i[0] >= start && i[0] < len + start)
		res[i[1]++] = s[i[0]++];
	res[i[1]] = 0;
	return (res);
}

// int main(int argc, char const *argv[])
// {
// 	char *s = "before actual chain after";
// 	int start = 6;
// 	int size = 6;

// 	printf("%s", ft_strsub(s, 7, -5));
// 	return 0;
// }
