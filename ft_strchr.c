/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:14:18 by lferro            #+#    #+#             */
/*   Updated: 2023/10/16 09:42:15 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	c = (char)c;
	i = 0;
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

// int main(int argc, char const *argv[])
// {
// 	char	*s = "tripouille";
// 	int	c = (int)('t' + 256);
// 	printf("\nlb: %s", strchr(s, c));
// 	printf("\nft: %s", ft_strchr(s, c));
// 	return (0);
// }