#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char) c)
			return ((char *)str);
		str++;
	}
	if (*str == (char) c)
		return ((char *)str);
	return (NULL);
}
/*int	main()
{
	char	*str = "hshsh";
	int	d = 's';
	char	*r = ft_strchr(str, d);
	printf("%s\n", r);
}*/
