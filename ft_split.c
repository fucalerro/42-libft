/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:51:59 by lferro            #+#    #+#             */
/*   Updated: 2023/10/15 10:17:42 by lferro           ###   ########.fr       */
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

char	*custom_strtrim(char const *s1, char c)
{
	char	*res;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = strlen(s1) - 1;
	while (s1[i] == c && s1[i])
		i++;
	while (s1[len] == c && len >= 0)
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


static char	*word_maker(int a, char const *s, int len)
{
	int		i;
	char	*word;

	i = 0;
	if (!(word = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	while(i < len)
	{
		word[i++] = s[a++];
	}
	i++;
	word[i] = 0;
	return (word);
}

char	**ft_split(const char *s, const char c)
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

// int main()
// {
// 	char *str = "    ";
// 	char c = ' ';
// 	size_t i = 0;
// 	char **s = ft_split(str, c);
// 	while (str[i])
// 	{
// 		printf("%s\n", ft_split(str, c)[i]);
// 		i++;
// 	}
// 	return(0);
// }
