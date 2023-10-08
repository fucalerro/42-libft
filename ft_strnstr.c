/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:52:31 by lferro            #+#    #+#             */
/*   Updated: 2023/09/28 09:36:30 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	*i;

	i = (size_t []){strlen(little), strlen(big), 0, 0};
	if (i[0] <= 0)
		return ((char *)big);
	if (len < i[0] || i[1] < i[0])
		return (NULL);
	while (i[2] <= i[0] && i[2] < len)
	{
		while (big[i[2] + i[3]] == little[i[3]])
			if (i[3]++ + 1 == i[0])
				return ((char *)&big[i[2]]);
		i[3] = 0;
		i[2]++;
	}
	return (NULL);
}

// int main(int argc, char const *argv[])
// {
// 	char *s1 = "pieorhunheraoi";
// 	char *s2 ="a";

// 	int n = 12;

// 	printf("%s\n", ft_strnstr(s1, s2, n));
// 	printf("%s\n", strnstr(s1, s2, n));

// 	return 0;
// }
