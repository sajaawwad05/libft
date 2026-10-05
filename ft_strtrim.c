#include "libft.h"

static	int is_set(char c, char const *s)
{
	int	i;
	i = 0;

	while(s[i])
	{
		if(s[i] == c)
			return (1);
		i++;
	}
	return (0);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;
	int	i;
	char	*result;

	start = 0;
	while(s1[start] && set && is_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while(end > start && is_set(s1[end - 1], set))
		end--;
	result = malloc(sizeof(char) * (end - start + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (start < end)
	{
		result[i] = s1[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}
