#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*res;
	size_t	i;

	if (!s || !f)
		return (NULL);
	res = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*char	ft_shift(unsigned int index, char c)
{
	(void) index;
	return (c + 1);
}
int main()
{
	char	*str;
	str = ft_strmapi("abcd", ft_shift);
	printf("%s\n", str);
}*/
