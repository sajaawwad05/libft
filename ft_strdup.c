#include "libft.h"

char	*ft_strdup(const char *src)
{
	int	len;
	int	i;
	char	*dest;

	len = 0;
	while (src[len])
		len++;
	dest = malloc(sizeof(char)*(len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}
