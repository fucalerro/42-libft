/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:06:17 by lferro            #+#    #+#             */
/*   Updated: 2023/10/12 09:54:45 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	dest_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (i < n && src[i])
	{
		if (dest_len + i < n - 1)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		else
			break;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
