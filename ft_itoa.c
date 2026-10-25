#include "libft.h"

static int	digit_count(long n)
{
	int	digits;

	digits = 0;
	if (n <= 0)
	{
		digits++;
		if (n == 0)
			return (digits);
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		digits;
	long	num;

	num = n;
	digits = digit_count(num);
	result = malloc(sizeof(char) * (digits + 1));
	if (!result)
		return (NULL);
	result[digits] = '\0';
	if (num == 0)
		result[0] = '0';
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		result[--digits] = (num % 10) + '0';
		num /= 10;
	}
	return (result);
}
