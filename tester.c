/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lferro <lferro@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:19:43 by lferro            #+#    #+#             */
/*   Updated: 2023/09/29 19:29:05 by lferro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <ctype.h>

#define ERR "ERROR!\n"
#define OK "ok\n"

#include <sys/cdefs.h>
__FBSDID("$FreeBSD$");

#include <string.h>

/*
 * Find the first occurrence of find in s, where the search is limited to the
 * first slen characters of s.
 */

const char	*strlen_tester(void)
{
	char	*s;

	s = " ej erger sdr;oghlkihm450-938nmy6h)*&^(du sdv ";
	if (ft_strlen(s) == strlen(s))
		return (OK);
	else
		return (ERR);
}

const char	*strdup_tester(void)
{
	const char	*s = " ej erger sdr;oghlkihm450-938nmy6h)*&^(du sdv ";
	char		*ds;

	ds = ft_strdup(s);
	if (ft_strcmp(s, ds) == 0)
	{
		free(ds);
		return (OK);
	}
	else
	{
		free(ds);
		return (ERR);
	}
}

const char	*strcmp_tester(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	char	*s5;
	char	*ss[5] = {s1, s2, s3, s4, s5};

	s1 = "asedrfgbertbsd";
	s2 = "\0";
	s3 = "";
	s4 = "    ";
	s5 = "\n";
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			if (ft_strcmp(ss[i], ss[j]) != strcmp(ss[i], ss[j]))
				return (ERR);
	return (OK);
}

const char	*strncmp_tester(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	char	*s5;
	char	*ss[5] = {s1, s2, s3, s4, s5};

	s1 = "ase";
	s2 = "\0";
	s3 = "";
	s4 = "    ";
	s5 = "\n";
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			for (int n = 0; n < 5; n++)
				if (ft_strncmp(ss[i], ss[j], n) != strncmp(ss[i], ss[j], n))
					return (ERR);
	return (OK);
}

const char	*strchr_tester(void)
{
	char	*s1;
	char	*s2;
	char	c1;
	char	c2;
	char	*ss[2] = {s1, s2};
	char	cs[2] = {c1, c2};

	s1 = "ewouargybearw";
	s2 = "";
	c1 = 'a';
	c2 = '\0';
	for (size_t i = 0; i < 2; i++)
		for (size_t j = 0; j < 2; j++)
			if (strchr(ss[i], cs[j]) != ft_strchr(ss[i], cs[j]))
				return (ERR);
	return (OK);
}

const char	*strrchr_tester(void)
{
	char	*s1;
	char	*s2;
	char	c1;
	char	c2;
	char	*ss[2] = {s1, s2};
	char	cs[2] = {c1, c2};

	s1 = "ewouargybearw";
	s2 = "";
	c1 = 'a';
	c2 = '\0';
	for (size_t i = 0; i < 2; i++)
		for (size_t j = 0; j < 2; j++)
			if (strrchr(ss[i], cs[j]) != ft_strrchr(ss[i], cs[j]))
				return (ERR);
	return (OK);
}

const char	*strcat_tester(void)
{
	char	s1[10] = "awda";
	char	s2[10] = "";
	char	d1[10] = "erhe";
	char	d2[10] = "";
	char	d3[10] = "erhe";
	char	d4[10] = "";

	if (strcmp(strcat(s1, d1), ft_strcat(s1, d1)) != 0)
		return (ERR);
	if (strcmp(strcat(s1, d2), ft_strcat(s1, d2)) != 0)
		return (ERR);
	if (strcmp(strcat(s2, d3), ft_strcat(s2, d3)) != 0)
		return (ERR);
	if (strcmp(strcat(s2, d4), ft_strcat(s2, d4)) != 0)
		return (ERR);
	return (OK);
}

const char	*strncat_tester(void)
{
	char	s1[1000] = "awda";
	char	s2[1000] = "";
	char	d1[1000] = "erhe";
	char	d2[1000] = "";
	char	d3[1000] = "erhe";
	char	d4[1000] = "";

	for (int n = 0; n < 15; n++)
	{
		if (strcmp(strncat(s1, d1, n), ft_strncat(s1, d1, n)) != 0)
			return (ERR);
		if (strcmp(strncat(s1, d2, n), ft_strncat(s1, d2, n)) != 0)
			return (ERR);
		if (strcmp(strncat(s2, d3, n), ft_strncat(s2, d3, n)) != 0)
			return (ERR);
		if (strcmp(strncat(s2, d4, n), ft_strncat(s2, d4, n)) != 0)
			return (ERR);
	}
	return (OK);
}

const char	*strstr_tester(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	char	*s5;
	char	*ss[5] = {s1, s2, s3, s4, s5};
	char	*ft_result;
	char	*std_result;

	s1 = "haystack";
	s2 = "";
	s3 = "rth";
	s4 = "a";
	s5 = "ha123ystack412haystack";
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
		{
			ft_result = ft_strstr(ss[i], ss[j]);
			std_result = strstr(ss[i], ss[j]);
			if (ft_result != std_result)
			{
				printf("i: %d\nj: %d\n", i, j);
				printf("nat: %s\n", strstr(ss[i], ss[j]));
				printf("ft : %s\n", ft_strstr(ss[i], ss[j]));
				return (ERR);
			}
		}
	return (OK);
}

const char	*strnstr_tester(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	char	*s5;
	char	*ss[5] = {s1, s2, s3, s4, s5};
	int		n;
	char	*ft_result;
	char	*std_result;

	s1 = "haystack";
	s2 = "";
	s3 = "rth";
	s4 = "a";
	s5 = "hays345stack";
	n = 3;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
		// for (int n = -2; n < 25; n++)
		{
			ft_result = ft_strnstr(ss[i], ss[j], n);
			std_result = strnstr(ss[i], ss[j], n);
			if (ft_result != std_result)
			{
				printf("i: %d\nj: %d\n, n: %d\n", i, j, n);
				printf("nat: %s\n", strnstr(ss[i], ss[j], n));
				printf("ft : %s\n", ft_strnstr(ss[i], ss[j], n));
				return (ERR);
			}
		}
	return (OK);
}

const char	*memcpy_tester(void)
{
	char	src1[] = "haystackhaystack";
	char	dst1[30];
	char	dst2[30] = "neddle";

	ft_memcpy(dst1, src1, strlen(src1) + 1);
	if (strcmp(dst1, src1) != 0)
	{
		printf("dst1: %s\nsrc1: %s\n\n", dst1, src1);
		return (ERR);
	}
	memcpy(dst2 + 6, src1, strlen(src1) + 1);
	if (strcmp(dst2, "neddlehaystackhaystack") != 0)
	{
		printf("dst2: %s\nsrc1: %s\n\n", dst2, src1);
		return (ERR);
	}
	return (OK);
}

const char	*isalpha_tester(void)
{
	for (int c = 0; c < 128; c++)
	{
		if ((ft_isalpha(c) == 0 && isalpha(c) != 0) || (ft_isalpha(c) != 0
				&& isalpha(c) == 0))
			return (ERR);
	}
	return (OK);
}

const char	*isdigit_tester(void)
{
	for (int c = 0; c < 128; c++)
	{
		if ((ft_isdigit(c) == 0 && isdigit(c) != 0) || (ft_isdigit(c) != 0
				&& isdigit(c) == 0))
			return (ERR);
	}
	return (OK);
}

const char	*isalnum_tester(void)
{
	for (int c = 0; c < 128; c++)
	{
		if ((ft_isalnum(c) == 0 && isalnum(c) != 0) || (ft_isalnum(c) != 0
				&& isalnum(c) == 0))
			return (ERR);
	}
	return (OK);
}

const char	*isascii_tester(void)
{
	for (int c = 0; c < 128; c++)
	{
		if ((ft_isascii(c) == 0 && isascii(c) != 0) || (ft_isascii(c) != 0
				&& isascii(c) == 0))
		{
			printf("c		: %d\n", c);
			printf("ft_isascii	: %d\n", ft_isascii(c));
			printf("isascii		: %d\n", isascii(c));
			return (ERR);
		}
	}
	return (OK);
}

const char	*isprint_tester(void)
{
	for (int c = 0; c < 128; c++)
	{
		if ((ft_isprint(c) == 0 && isprint(c) != 0) || (ft_isprint(c) != 0
				&& isprint(c) == 0))
			return (ERR);
	}
	return (OK);
}

const char	*tolower_tester(void)
{
	for (int c = 0; c < 128; c++)
	{
		if (ft_tolower(c) != tolower(c))
			return (ERR);
	}
	return (OK);
}

const char	*toupper_tester(void)
{
	for (int c = 0; c < 128; c++)
	{
		if (ft_toupper(c) != toupper(c))
		{
			printf("c: %d\n, ft: %d\n, nat: %d\n", c, ft_toupper(c),
				toupper(c));
			return (ERR);
		}
	}
	return (OK);
}

const char	*atoi_tester(void)

{
	char *str[] = {"--1230", "  +1230", "-1230", "   -1230", "  -  1230",
		"asdd", ""};

	int i = 0;
	while (*str[i++])
		if (ft_atoi(*str) != atoi(*str))
			return (ERR);
	return OK;
}

const char	*strlcat_tester(void)
{
	char	*src1;
	char	*src2;
	char	is1[10] = "abc";
	char	s1[10] = "abc";
	char	is2[10] = "";
	char	s2[10] = "";
	char	*src[2] = {src1, src2};
	char	*ds[2] = {s1, s2};
	char	*ids[2] = {is1, is2};
	char	verif[100];
	int		lcat;
	int		ftlcat;

	src1 = "4567";
	src2 = "";
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			for (int n = -1; n < 10; n++)
			{
				lcat = strlcat(ds[i], src[j], n);
				strcpy(verif, ds[i]);
				strcpy(ds[i], ids[i]);
				ftlcat = strlcat(ds[i], src[j], n);
				if (strcmp(verif, ds[i]) != 0 || ftlcat != lcat)
					return ERR;
				strcpy(ds[i], ids[i]);
			}
	return OK;
}

const char	*bzero_tester(void)
{
	int		intarr1[] = {1, 2, 3, 4, 5};
	int		intarr2[] = {1, 2, 3, 4, 5};
	char	charr1[] = "vive 42";
	char	charr2[] = "vive 42";
	size_t	int_n;
	size_t	char_n;

	int_n = sizeof(intarr1) / sizeof(intarr1[0]);
	char_n = strlen(charr1);
	ft_bzero(intarr1, int_n);
	ft_bzero(charr1, char_n);
	bzero(intarr2, int_n);
	bzero(charr2, char_n);
	if (memcmp(intarr1, intarr2, int_n) != 0)
		return ERR;
	if (memcmp(charr1, charr2, char_n) != 0)
		return ERR;
	return OK;
}

const char	*memset_tester(void)
{
	int		intarr1[] = {1, 2, 3, 4, 5};
	int		intarr2[] = {1, 2, 3, 4, 5};
	char	charr1[] = "vive 42";
	char	charr2[] = "vive 42";
	size_t	int_n;
	size_t	char_n;

	int_n = sizeof(intarr1) / sizeof(intarr1[0]);
	char_n = strlen(charr1);
	for (int c = 0; c < 127; c++)
	{
		ft_memset(intarr1, c, int_n);
		ft_memset(charr1, c, char_n);
		memset(intarr2, c, int_n);
		memset(charr2, c, char_n);
		if (memcmp(intarr1, intarr2, int_n) != 0)
			return ERR;
		if (memcmp(charr1, charr2, char_n) != 0)
			return ERR;
	}
	return OK;
}

const char	*memmove_tester(void)
{
	int		intarr1[] = {1, 2, 3, 4, 5};
	int		intarr2[] = {1, 2, 3, 4, 5};
	char	charr1[] = "vive 42";
	char	charr2[] = "vive 42";
	size_t	int_n;
	size_t	char_n;

	int_n = sizeof(intarr1) / sizeof(intarr1[0]);
	char_n = strlen(charr1);
	for (int c = 0; c < 127; c++)
	{
		ft_memmove(intarr1, intarr1 + 1, int_n - 1);
		ft_memmove(charr1 + 1, charr1, char_n - 1);
		memmove(intarr2, intarr2 + 1, int_n - 1);
		memmove(charr2 + 1, charr2, char_n - 1);
		if (memcmp(intarr1, intarr2, int_n - 1) != 0 || strcmp(charr1,
				charr2) != 0)
			return ERR;
	}
	return OK;
}

const char	*strcpy_tester(void)
{
	char		dest[20];
	char		dest2[20];
	const char	*src = "Hello, World!";
	size_t		max_len;

	max_len = sizeof(dest) - 1;
	ft_strcpy(dest, src);
	strncpy(dest2, src, max_len);
	dest[max_len] = '\0';
	if (strcmp(dest, dest2) != 0)
		return ERR;
	ft_strcpy(dest, "");
	dest2[0] = '\0';
	if (strcmp(dest, dest2) != 0)
		return ERR;
	if (strcmp(dest, dest2) != 0)
		return ERR;
	return OK;
}

const char	*strncpy_tester(void)
{
	const char	*src = "Hello, World!";
	size_t		max_len;

	char dest[20];  // Destination buffer
	char dest2[20]; // Second destination buffer
	max_len = sizeof(dest) - 1;
	// Maximum length to avoid buffer overflow
	// Test 1: Copying a string with different values of n
	for (size_t n = 0; n <= max_len; n++)
	{
		ft_strncpy(dest, src, n);
		dest[n] = 0;
		strncpy(dest2, src, n);
		dest2[n] = 0;
		if (strcmp(dest, dest2) != 0)
		{
			printf("nat: %s\nft:  %s\nn: %ld\n", dest2, dest, n);
			return ERR;
		}
	}
	// Test 2: Empty string with different values of n
	for (size_t n = 0; n <= max_len; n++)
	{
		ft_strncpy(dest, "", n);
		dest[n] = 0;
		dest2[n] = 0;
		if (strcmp(dest, dest2) != 0)
			return ERR;
	}
	return OK;
}

const char	*strjoin_tester(void)
{
	char	*s1[2] = {"", "123456789"};
	char	*res[3] = {"", "123456789", "123456789123456789"};

	for (size_t i = 0; i < 2; i++)
		for (size_t j = 0; j < 2; j++)
			if (strcmp(ft_strjoin(s1[i], s1[j]), res[i + j]) != 0)
			{
				printf("%s\n%s\n%s\n%s\n", s1[i], s1[j], res[i + j],
					ft_strjoin(s1[i], s1[j]));
				return ERR;
			}
	return OK;
}

int	test_ft_putnbr(int n, const char *expected_output)
{
	char	buffer[12];

	fflush(stdout);
	memset(buffer, 0, sizeof(buffer));
	if (freopen("/dev/null", "w", stdout) == NULL)
	{
		perror("freopen");
		return 1;
	}
	ft_putnbr(n);
	if (freopen("/dev/tty", "w", stdout) == NULL)
	{
		perror("freopen");
		return 1;
	}
	if (strcmp(buffer, expected_output) == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

const char	*putnbr_tester(void)
{
	int		n[4] = {2147483647, 2147483648, -2147483648, 0};
	char	*s[4] = {"2147483647", "2147483648", "-2147483648", "0"};

	for (int i = 0; i < 4; i++)
		if (test_ft_putnbr(n[i], s[i]) != 0)
			return ERR;
	return OK;
}

int	main(void)
{
	printf("ft_strdup:	%s", strdup_tester());
	printf("ft_strlen:	%s", strlen_tester());
	printf("ft_strcat:	%s", strcat_tester());
	printf("ft_strncat:	%s", strncat_tester());
	printf("ft_strchr:	%s", strchr_tester());
	printf("ft_strrchr:	%s", strrchr_tester());
	printf("ft_strcmp:	%s", strcmp_tester());
	printf("ft_strncmp:	%s", strncmp_tester());
	printf("ft_strstr:	%s", strstr_tester());
	printf("ft_isalpha:	%s", isalpha_tester());
	printf("ft_isdigit:	%s", isdigit_tester());
	printf("ft_isalnum:	%s", isalnum_tester());
	printf("ft_isascii:	%s", isascii_tester());
	printf("ft_isprint:	%s", isprint_tester());
	printf("ft_tolower:	%s", tolower_tester());
	printf("ft_toupper:	%s", toupper_tester());
	printf("ft_atoi:	%s", atoi_tester());
	printf("ft_strnstr:	%s", strnstr_tester());
	printf("ft_strlcat:	%s", strlcat_tester());
	printf("ft_bzero:	%s", bzero_tester());
	printf("ft_memcpy:	%s", memcpy_tester());
	printf("ft_memset:	%s", memset_tester());
	printf("ft_memmove:	%s", memmove_tester());
	printf("ft_strcpy:	%s", strcpy_tester());
	printf("ft_strncpy:	%s", strncpy_tester());
	printf("ft_strjoin:	%s", strjoin_tester());
	printf("ft_putnbr:	%s", putnbr_tester());
	return (0);
}
