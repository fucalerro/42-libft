/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:51:59 by lferro            #+#    #+#             */
/*   Updated: 2023/10/15 10:15:48 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(const char *s, const char c)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	j = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] != c && index == 0)
		{
			index = 1;
			j++;
		}
		else if (s[i] == c)
			index = 0;
		i++;
	}
	return (j);
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
	char	**res;
	int		i;
	int		word_len;
	int		j;

	i = 0;
	j = 0;
	s = custom_strtrim(s, c);
	if (!s || !(res = malloc((word_counter(s, c) + 1) * sizeof(char *))))
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		word_len = 0;
		while (s[word_len + i] != c && s[word_len + i])
			word_len++;
		res[j] = word_maker(i, s, word_len);
		if (res[j] == 0)
			free(res);
		if (res[j] == 0)
			return (0);
		j++;
		i += word_len;
	}
	res[j] = 0;
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
