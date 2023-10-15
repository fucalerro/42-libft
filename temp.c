static char	*max_int_or_zero_mngmt(int n)
{
	char	*str;

	if (n == 0)
	{
		str = malloc(sizeof(char) * 2);
		if (str == 0)
			return (0);
		str[0] = '0';
		str[1] = 0;
	}
	else
	{
		str = malloc(sizeof(char) * 12);
		if (!str)
			return (0);
		return (strdup("-2147483648"));
	}
	return (str);
}

static char	*mallocator(int n, int count)
{
	char	*anbr;

	if (n < 0)
		count++;
	anbr = malloc(sizeof(char) * count);
	return (anbr);
}

static int	count_digit(int n)
{
	int	count;

	count = 3;
	if (n > 0)
		count--;
	while ((n > 9 || n < -9))
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*anbr;
	int	*i;

	i = (int[]){0, n, 0};
	if (n == 0 || n == -2147483648)
	{
		anbr = max_int_or_zero_mngmt(n);
		return (anbr);
	}
	i[0] = count_digit(n);
	anbr = mallocator(n, i[0]);
	if (anbr == 0)
		return (0);
	if (n < 0)
		anbr[0] = '-';
	if (n < 0)
		n = -n;
	anbr[--i[0]] = 0;
	while (n > 0)
	{
		anbr[i[0]-- - 1] = (n % 10) + 48;
		n /= 10;
	}
	return (anbr);
}

int main(void)
{
	int n = -2147483648LL;
	printf("%s\n", ft_itoa(n));
	return (0);
}
