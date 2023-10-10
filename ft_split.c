/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:51:59 by lferro            #+#    #+#             */
/*   Updated: 2023/10/10 14:03:03 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_counter(char const *s, char c)
{
	int	word_len;
	int	i;

	i = 0;
	word_len = 0;
	while (s[i++])
		if (s[i] == c && s[i + 1] != c && s[i + 1] != 0)
			word_len++;
	return (word_len);
}

char	**ft_split(char const *s, char c)
{
	size_t	*i;
	int		a;
	int		b;
	char	**res;

	a = 0;
	b = 0;
	i = (size_t[]){-1, 0};
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
	return (res);
}
