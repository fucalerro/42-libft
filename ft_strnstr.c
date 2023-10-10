/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:52:31 by lferro            #+#    #+#             */
/*   Updated: 2023/10/10 18:39:55 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	if (*needle)
// 		return ((char *)haystack);
// 	while (len >= strlen(needle) || strlen(haystack) < strlen(needle))
// 		return 0;
// 	while ( <= strlen(needle))
// }




char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int j = 0;
	int i = 0;
	if (strlen(needle) <= 0)
		return ((char *)haystack);
	if (len < strlen(needle) || strlen(haystack) <  strlen(needle))
		return (0);
	while (j <= strlen(needle) && j < len)
	{
		while (*haystack++ == *needle)
			if ( i++ + 1 ==  strlen(needle))
				return ((char *)haystack);
		 i = 0;
		 j++;
	}
	return (0);
}





int main(int argc, char const *argv[])
{
	char *s1 = "pieorhunheraoi";
	char *s2 ="a";

	int n = 12;

	printf("%s\n", ft_strnstr(s1, s2, n));
	printf("%s\n", strnstr(s1, s2, n));

	return (0);
}
