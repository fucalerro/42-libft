/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:51:59 by lferro            #+#    #+#             */
/*   Updated: 2023/09/29 19:26:12 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	*i;
	char	**res;

	i = (size_t []){0, 1, 0, -1, 0, 1};
	while (s[i[4]++])
		if (s[i[4]] == c && s[i[4] + 1] != c && s[i[4] + 1] != 0)
			i[5]++;
	res = malloc((i[5] + 1) * sizeof(char *));
	while (++(i[3]) < i[5])
	{
		i[2] = 0;
		while ((s[i[0]++] == c && *s))
			i[1]++;
		while ((s[i[1]] != c && *s) || (i[1] < i[0]))
			i[1]++;
		res[i[3]] = malloc(sizeof(char) * (i[1] - i[0] + 3));
		if (res[i[3]] == NULL)
			free(res);
		if (res[i[3]] == NULL || res == NULL)
			return (NULL);
		while (i[0] <= i[1] && *s)
			res[i[3]][i[2]++] = s[i[0]++ - 1];
		res[i[3]][i[2]] = 0;
	}
	return (res);
}

//  0  1  2   3  4  5
//  a  b  j   i  k  w

// int main(void)
// {
// 	char *s = "___abc___def__ghi___";
// 	char c = '_';

// 	// printf("nbr of words: %d\n", word_counter(s, c));

// 	char **res = ft_strsplit(s, c);

// 	for (int i = 0; i < 4; i++)
// 		printf("%s\n", res[i]);

// 	return 0;
// }
