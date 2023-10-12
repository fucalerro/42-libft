/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:51:59 by lferro            #+#    #+#             */
/*   Updated: 2023/10/12 12:45:03 by lferro           ###   ########.fr       */
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
	char	**res;
	int		i;
	int		j;

	i = 0;
	res = malloc((word_counter(s, c) + 1) * sizeof(char *));
	if (res == 0)
		return (NULL);
	while (i++ < word_counter(s, c))
	{
		j = 0;
		while (s[a] == c && *s)
			b++;

	}


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
	res = malloc((word_counter(s, c) + 1) * sizeof(char *));
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

int main(int argc, char const *argv[])
{
	char *s = "je mange du pain";
	char c = ' ';
	char **str = ft_split(s,c);

	for (int i = 0; i <= word_counter(s, c); i++)
		printf("%s\n", str[i]);

	return 0;
}
