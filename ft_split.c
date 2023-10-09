/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:51:59 by lferro            #+#    #+#             */
/*   Updated: 2023/10/09 16:39:38 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(char const *s, char c)
{
	int	word_len;
	int	i;

	while (s[i++])
		if (s[i] == c && s[i + 1] != c && s[i + 1] != 0)
			word_len++;
	return (word_len);
}

char	**ft_split(char const *s, char c)
{
	size_t *i;

	i = (size_t []){-1, 0};

	int		i;
	int		j;
	int		a;
	int		b;
	char	**res;

	res = malloc((word_counter(s, c) + 1) * sizeof(char));
	if (res == 0)
		return (NULL);
	while (++(i[0]) < word_counter(s, c))
	{
		i[1] = 0;
		while ((s[a++] == c && *s))
			b++;
		while ((s[b] != c && *s) || (b < a))
			b++;
		res[i[0]] = malloc(sizeof(char) * (b - a + 3));
		if (res[i[0]] == NULL)
			free(res);
		if (res[i[0]] == NULL)
			return (NULL);
		while (a <= b && *s)
			res[i[0]][i[1]++] = s[a++ - 1];
		res[i[0]][i[1]] = 0;
	}
}

// char	**ft_split(char const *s, char c)
// {
// 	size_t	*i;
// 	char	**res;

// 	i = (size_t []){0, 1, 0, -1, 0, 1};
// 	while (s[i[4]++])
// 		if (s[i[4]] == c && s[i[4] + 1] != c && s[i[4] + 1] != 0)
// 			i[5]++;
// 	res = malloc((i[5] + 1) * sizeof(char *));
// 	while (++(i[3]) < i[5])
// 	{
// 		i[2] = 0;
// 		while ((s[i[0]++] == c && *s))
// 			i[1]++;
// 		while ((s[i[1]] != c && *s) || (i[1] < i[0]))
// 			i[1]++;
// 		res[i[3]] = malloc(sizeof(char) * (i[1] - i[0] + 3));
// 		if (res[i[3]] == NULL)
// 			free(res);
// 		if (res[i[3]] == NULL || res == NULL)
// 			return (NULL);
// 		while (i[0] <= i[1] && *s)
// 			res[i[3]][i[2]++] = s[i[0]++ - 1];
// 		res[i[3]][i[2]] = 0;
// 	}
// 	return (res);
// }
