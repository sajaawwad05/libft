#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*int	main()
{
	char	st[30] = "abcdefghikj";
	ft_bzero(st, 5);
	printf("%s\n", st + 5);
}*/
