/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:14:58 by lferro            #+#    #+#             */
/*   Updated: 2023/10/09 19:08:49 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	j;

	if (len + (size_t)start > ft_strlen(s))
		return (NULL);
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	while (i < start && *s)
		i++;
	while (i >= start && i < len + start)
		res[j++] = s[i++];
	res[j] = 0;
	return (res);
}

// int main(int argc, char const *argv[])
// {
// 	char *s1 = "hello world";
// 	int start = 2;
// 	int len = 2;

// 	printf("%s", ft_substr(s1, start, len));

// 	return 0;
// }
