/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:44:41 by lferro            #+#    #+#             */
/*   Updated: 2023/10/02 20:15:32 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (res == NULL)
		return (NULL);
	while (s[i])
	{
		res[i] = f(s[i]);
		i++;
	}
	res[i] = 0;
	return res;
}

// char	func(char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		c = c - 32;
// }

// int main()
// {
// 	char *s = "je mange du pain";
// 	char *newstr = ft_strmap(s, func);

// 	printf("%s", newstr);
// 	return (0);
// }


