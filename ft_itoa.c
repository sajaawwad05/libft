#include "libft.h"

static int	digit_count(int n)
{
	int	digits;

	digits = 0;
	if (n < 0)
	{
		n = -n;
		digits++;
	}
	while (n > 9)
	{
		n = n / 10;
		digits++;
	}
	if (n > 0 && n < 9)
		digits++;
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	digits;
	long	num;

	num = n;
	digits = digit_count(num);
	result = malloc((digits + 1) * sizeof(char));
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
