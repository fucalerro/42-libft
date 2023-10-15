/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:32:01 by lferro            #+#    #+#             */
/*   Updated: 2023/10/14 10:14:50 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_istrimable(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = strlen(s1) - 1;
	while (ft_istrimable(s1[i], set) == 1)
		i++;
	while (ft_istrimable(s1[len], set) == 1)
		len--;
	if (len <= i - 1)
		return (0);
	res = malloc(sizeof(char) * len - i + 2);
	if (res == 0)
		return (0);
	while (i <= len)
		res[j++] = s1[i++];
	res[j] = 0;
	return (res);
}

// int main(void)
// {
// 	const char *str = "lorem \n ipsum \t dolor \n sit \t amet";
// 	const char *set = " ";
// 	char *newstr = ft_strtrim(str, set);
// 	printf("\n%s", newstr);
// 	printf("\n");
// 	return (0);
// }
