void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char* dest_char;
	const unsigned char* src_char;
	size_t	i;
	i = 0;
	if (dest == NULL && src == NULL)
		return 	NULL;
	dest_char = (unsigned char*) dest;
	src_char = (const unsigned char*) src;
        while (i < n)
	{
		dest_char[i] = src_char[i];
		i++
	}
	return (dest);	
}
