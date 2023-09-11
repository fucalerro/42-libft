/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:34:41 by lferro            #+#    #+#             */
/*   Updated: 2023/09/11 16:05:56 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	dest_len;

	dest_len = ft_strlen(dest);

	i = 0;
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	  dest[dest_len + i] = '\0';
	return (dest);
}

