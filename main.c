#include "libft.h"
#include <stdio.h>
int	main(void)
{
	//printf("%d", ft_isalpha('k'));
	//printf("%d\n", ft_isdigit('l'));
	//printf("%d\n", ft_isalnum('f'));
	//printf("%d\n", ft_isascii('5'));
	//printf("%d\n", ft_isprint('\0'));
	//printf("%ld\n", ft_strlen("stars88"));
	//printf("%c\n", ft_toupper('d'));
	//printf("%c\n", ft_tolower('H'));
	//printf("%s\n", ft_strchr("hi how are u", '\0'));
	//printf("%s\n", ft_strrchr("lala land", 'a'));
	//printf("%d\n", ft_strncmp("hahahtkkl", "hahahtoo", 5));
	//char s[] = "HELLO WORLD";
	//char d[] = "WORLD";
	//ft_memset(s, 'd', sizeof(s));
	//printf("%s\n", s);
	//ft_memcpy(d, s, sizeof(s));
	//printf("%s\n", s);
	//ft_memmove(s+1, s, sizeof(char)*4);
	//printf("%s\n", s);
	//printf("%s\n", ft_strnstr(s, d, 5));
	//printf("%s\n", d);
	//printf("%d\n",  ft_atoi("-123"));
	//char *str = "hello 42";
	//char *mystr = ft_strdup(str);
	//int *arr;
	//int n = 5;
	//arr = (int *)ft_calloc(n, sizeof(int));
	//for (int i = 0; i < n; i++){
	//	printf("%d\n",arr[i]);
	//}
	//free(arr);
	//char 	const *str= "saja walid";
	//char	const*str2= "id";
	//printf("%s\n", ft_strtrim(str,str2));
	char *s = " hi there  u";
	char	**v = ft_split(s, ' ');
	int	i;
	 i = 0;
	while (v[i])
	{
		printf("%s\n", v[i]);
		free(v[i]);
		i++;
	}
	free(v);

	return (0);
}
