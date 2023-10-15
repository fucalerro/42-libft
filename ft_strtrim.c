/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:32:01 by lferro            #+#    #+#             */
/*   Updated: 2023/10/15 20:17:25 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	ft_istrimable(char c, const char *set)
// {
// 	int	i;

// 	i = 0;
// 	while (set[i])
// 	{
// 		if (c == set[i])
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*res;
// 	int		i;
// 	int		j;
// 	int		len;

// 	i = 0;
// 	j = 0;
// 	len = strlen(s1) - 1;
// 	if (s1 == NULL)
// 		return (NULL);
// 	if (set == NULL)
// 		return (ft_strdup(s1));
// 	while (ft_istrimable(s1[i], set) == 1)
// 		i++;
// 	while (ft_istrimable(s1[len], set) == 1)
// 		len--;
// 	if (s1[i] == 0)
// 		return (ft_strdup(""));
// 	res = malloc(sizeof(char) * len - i + 2);
// 	if (res == 0)
// 		return (0);
// 	while (i <= len)
// 		res[j++] = s1[i++];
// 	res[j] = 0;
// 	return (res);
// }

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

// int main(void)
// {
// 	const char *str = "   $$  asd  $$ ";
// 	const char *set = " $";
// 	char *newstr = ft_strtrim(str, set);
// 	printf("%s", newstr);
// 	// printf("");
// 	return (0);
// }
