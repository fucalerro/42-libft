/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:25:03 by lferro            #+#    #+#             */
/*   Updated: 2023/09/28 09:35:04 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	*i;

	i = (size_t[]){ft_strlen(needle), ft_strlen(haystack), 0, 0};
	if (i[0] <= 0)
		return ((char *)haystack);
	while (i[2] <= i[1])
	{
		while (haystack[i[2] + i[3]] == needle[i[3]])
			if (i[3]++ + 1 == i[0])
				return ((char *)&haystack[i[2]]);
		i[3] = 0;
		i[2]++;
	}
	return (NULL);
}
