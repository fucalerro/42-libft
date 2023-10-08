/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:47:52 by lferro            #+#    #+#             */
/*   Updated: 2023/09/28 09:34:22 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*chardest;
	const char	*charsrc;
	char		*buffer;

	chardest = (char *)dest;
	charsrc = (const char *)src;
	if (src == NULL)
		return (NULL);
	if (chardest == charsrc)
		return (dest);
	buffer = malloc(sizeof(char) * n);
	ft_memcpy(buffer, charsrc, n);
	ft_memcpy(chardest, buffer, n);
	free(buffer);
	return (dest);
}
