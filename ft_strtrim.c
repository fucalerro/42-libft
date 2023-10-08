/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:32:01 by lferro            #+#    #+#             */
/*   Updated: 2023/09/30 19:14:30 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s)
{
	size_t	*i;
	char	*res;

	i = (size_t []){0, strlen(s) - 1, 0};
	while (ft_isspace(s[i[0]]) == 1)
		s[i[0]++];
	while (ft_isspace(s[i[1]]) == 1)
		s[i[1]--];
	res = malloc(sizeof(char) * (i[1] - i[0] + 1));
	if (res == NULL)
		return (NULL);
	while (i[0] <= i[1])
		res[i[2]++] = s[i[0]++];
	return (res);
}

// int main(int argc, char const *argv[])
// {
// 	char *str = "       je mange      ";
// 	char *newstr = ft_strtrim(str);
// 	printf("%s", newstr);
// 	return 0;
// }
