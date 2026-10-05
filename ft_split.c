#include "libft.h"

size_t	words_count(char const *s, char c)
{
	size_t	words;
	bool	inside_word;

	words = 0;
	while (*s)
	{
		inside_word = false;
		while (*s && *s == c)
			++s;
		while (*s && *s != c)
		{
			if(!inside_word)
			{
				++words;
				inside_word = true;
			}
			++s;
		}
	}
	return (words);
	
}
int	safe_malloc(char **words_v, int position, size_t buffer)
{
	int	i;

	words_v[position] = malloc(buffer);
	if (words_v[position] == NULL)
	{
		i = 0;
		while (i < position)
		{
			free(words_v[i]);
			i++;
		}
		return (1);
	}
	return (0);
}
int	cpy_words(char **words, char const *s, char c)
{
	size_t	len;
	int	i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s && *s == c)
			++s;
		while (*s && *s != c)
		{
			++len;
			++s;
		}
		if (len)
		{
			if(safe_malloc(words, i, len + 1));
				return (1);
		}
		ft_strlcpy(words[i], s - len, len + 1);
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**words_v;

	if (s == NULL)
		return (NULL);
	words = words_count(s, c);
	words_v = malloc ((words + 1) * sizeof (char *));
	if (words_v == 	NULL)
		return (NULL);
	words_v[words] = NULL;

	if (cpy_words(words_v, s, c))
	{
		free(words_v);
		return (NULL);
	}
	return (words_v);
}
